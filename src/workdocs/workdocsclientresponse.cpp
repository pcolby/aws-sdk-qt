/*
    Copyright 2013-2018 Paul Colby

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

#include "workdocsclientresponse.h"
#include "workdocsclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  WorkDocsClientResponse
 *
 * @brief  Handles  WorkDocsClient responses.
 *
 * @see    Client::workDocsClient
 */

/**
 * @brief  Constructs a new WorkDocsClientResponse object.
 *
 * @param  parent   This object's parent.
 */
WorkDocsClientResponse::WorkDocsClientResponse(QObject * const parent)
    : AwsAbstractResponse(new WorkDocsClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  WorkDocsClientResponsePrivate
 *
 * @brief  Private implementation for WorkDocsClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkDocsClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WorkDocsClientResponse instance.
 */
WorkDocsClientResponsePrivate::WorkDocsClientResponsePrivate(
    WorkDocsClientQueueResponse * const q) : WorkDocsClientPrivate(q)
{

}

} // namespace WorkDocs
} // namespace AWS
