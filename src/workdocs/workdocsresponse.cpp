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

#include "workdocsresponse.h"
#include "workdocsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  WorkDocsResponse
 *
 * @brief  Handles WorkDocs WorkDocs responses.
 *
 * @see    WorkDocsClient::workDocs
 */

/**
 * @brief  Constructs a new WorkDocsResponse object.
 *
 * @param  parent   This object's parent.
 */
WorkDocsResponse::WorkDocsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WorkDocsResponsePrivate(this), parent)
{

}

/**
 * @brief  Parse a failure response.
 *
 * @param  response  Response to parse.
 */
void WorkDocsResponse::parseFailure(QIODevice &response)
{
    Q_D(SqsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/**
 * @internal
 *
 * @class  WorkDocsResponsePrivate
 *
 * @brief  Private implementation for WorkDocsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WorkDocsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WorkDocsResponse instance.
 */
WorkDocsResponsePrivate::WorkDocsResponsePrivate(
    WorkDocsQueueResponse * const q) : WorkDocsPrivate(q)
{

}

} // namespace WorkDocs
} // namespace QtAws
