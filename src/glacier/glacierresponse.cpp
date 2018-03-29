/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "glacierresponse.h"
#include "glacierresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  GlacierResponse
 *
 * @brief  Handles Glacier Glacier responses.
 *
 * @see    GlacierClient::glacier
 */

/**
 * @brief  Constructs a new GlacierResponse object.
 *
 * @param  parent   This object's parent.
 */
GlacierResponse::GlacierResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlacierResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GlacierResponsePrivate
 *
 * @brief  Private implementation for GlacierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlacierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GlacierResponse instance.
 */
GlacierResponsePrivate::GlacierResponsePrivate(
    GlacierQueueResponse * const q) : GlacierPrivate(q)
{

}

} // namespace Glacier
} // namespace QtAws
