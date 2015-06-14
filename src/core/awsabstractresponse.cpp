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

#include "awsabstractresponse.h"
#include "awsabstractresponse_p.h"

#include <QNetworkReply>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractResponse
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractResponse object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractResponse::AwsAbstractResponse(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractResponsePrivate(this))
{
    //Q_D(AwsAbstractResponse);
}

AwsAbstractResponse::~AwsAbstractResponse()
{
    delete d_ptr;
}

bool AwsAbstractResponse::isErrorResponse() const
{
    return false;
}

/// @todo Document bool AwsAbstractResponse::isValid() const

/// @todo Document bool AwsAbstractResponse::parse(QNetworkReply * const reply)

/**
 * @internal
 *
 * @class  AwsAbstractResponsePrivate
 *
 * @brief  Private implementation for AwsAbstractResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractResponse instance.
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
AwsAbstractResponsePrivate::AwsAbstractResponsePrivate(AwsAbstractResponse * const q)
    : q_ptr(q)
{

}

AwsAbstractResponsePrivate::~AwsAbstractResponsePrivate()
{

}

QTAWS_END_NAMESPACE
