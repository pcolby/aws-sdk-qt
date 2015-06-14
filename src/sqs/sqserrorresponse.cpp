/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqserrorresponse.h"
#include "sqserrorresponse_p.h"

#include <QNetworkReply>
#include <QXmlStreamReader>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsErrorResponse::SqsErrorResponse(QObject * const parent)
    : SqsResponse(parent), d_ptr(new SqsErrorResponsePrivate(this))
{

}

bool SqsErrorResponse::isErrorResponse() const
{
    return true;
}

bool SqsErrorResponse::isValid() const
{
    Q_ASSERT_X(false, Q_FUNC_INFO, "not implemented yet");
    return false;
}

bool SqsErrorResponse::parse(QNetworkReply * const reply)
{
    Q_D(SqsErrorResponse);
    QXmlStreamReader xml(reply);
    xml.readNextStartElement();
    /// @todo Implement parse
    //if (xml.name() == "UnknownOperationException");
    //    d->parseUnknownExceptoin();
    //if (xml.name() == "ErrorResponse");
    //    d->parseErrorResponse();
    return false;
}

/**
 * @internal
 *
 * @class  SqsErrorResponsePrivate
 *
 * @brief  Private implementation for SqsErrorResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SqsResponse instance.
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
SqsErrorResponsePrivate::SqsErrorResponsePrivate(SqsErrorResponse * const q)
    : SqsResponsePrivate(q), q_ptr(q)
{

}

SqsErrorResponsePrivate::~SqsErrorResponsePrivate()
{

}

QTAWS_END_NAMESPACE
