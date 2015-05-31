/*
    Copyright 2013 Paul Colby

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

#include "awsabstractservice.h"
#include "awsabstractservice_p.h"

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractService
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractService object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractService::AwsAbstractService(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractServicePrivate(this))
{
    //Q_D(AwsAbstractService);
}

AwsAbstractService::~AwsAbstractService()
{
    delete d_ptr;
}

/**
 * @internal
 *
 * @class  AwsAbstractServicePrivate
 *
 * @brief  Private implementation for AwsAbstractService.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractServicePrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractService instance.
 */
AwsAbstractServicePrivate::AwsAbstractServicePrivate(AwsAbstractService * const q)
    : q_ptr(q)
{

}

QTAWS_END_NAMESPACE
