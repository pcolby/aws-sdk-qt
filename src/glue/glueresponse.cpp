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

#include "glueresponse.h"
#include "glueresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GlueResponse
 *
 * @brief  Handles Glue Glue responses.
 *
 * @see    GlueClient::glue
 */

/**
 * @brief  Constructs a new GlueResponse object.
 *
 * @param  parent   This object's parent.
 */
GlueResponse::GlueResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GlueResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GlueResponsePrivate
 *
 * @brief  Private implementation for GlueResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GlueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GlueResponse instance.
 */
GlueResponsePrivate::GlueResponsePrivate(
    GlueQueueResponse * const q) : GluePrivate(q)
{

}

} // namespace Glue
} // namespace QtAws
