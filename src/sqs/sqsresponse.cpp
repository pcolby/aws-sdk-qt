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

#include "sqsresponse.h"
#include "sqsresponse_p.h"

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
SqsResponse::SqsResponse(QNetworkReply * const reply, QObject * const parent)
    : AwsAbstractResponse(reply, parent), d_ptr(new SqsResponsePrivate(this))
{

}

/**
 * @brief  Constructs a new SqsResponse object.
 *
 * @param parent       This object's parent.
 */
SqsResponse::SqsResponse(QObject * const parent)
    : AwsAbstractResponse(parent), d_ptr(new SqsResponsePrivate(this))
{

}

SqsResponse::~SqsResponse()
{
    delete d_ptr;
}

/// @todo Implement bool SqsResponse::isValid() const ?

/// @todo Implement bool SqsResponse::parse(QNetworkReply * const reply) ?

/**
 * @internal
 *
 * @class  SqsResponsePrivate
 *
 * @brief  Private implementation for SqsResponse.
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
SqsResponsePrivate::SqsResponsePrivate(SqsResponse * const q)
    : AwsAbstractResponsePrivate(q), q_ptr(q)
{

}

SqsResponsePrivate::~SqsResponsePrivate()
{

}

QTAWS_END_NAMESPACE
