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

#include "deletereportdefinitionresponse.h"
#include "deletereportdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CostandUsageReportService {

/*!
 * \class QtAws::CostandUsageReportService::DeleteReportDefinitionResponse
 *
 * \brief The DeleteReportDefinitionResponse class encapsulates CostandUsageReportService DeleteReportDefinition responses.
 *
 * \ingroup CostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::deleteReportDefinition
 */

/*!
 * @brief  Constructs a new DeleteReportDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReportDefinitionResponse::DeleteReportDefinitionResponse(
        const DeleteReportDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CostandUsageReportServiceResponse(new DeleteReportDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteReportDefinitionRequest(request));
    setReply(reply);
}

const DeleteReportDefinitionRequest * DeleteReportDefinitionResponse::request() const
{
    Q_D(const DeleteReportDefinitionResponse);
    return static_cast<const DeleteReportDefinitionRequest *>(d->request);
}

/*!
 * @brief  Parse a CostandUsageReportService DeleteReportDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteReportDefinitionResponsePrivate
 *
 * \brief Private implementation for DeleteReportDefinitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteReportDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReportDefinitionResponse instance.
 */
DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponsePrivate(
    DeleteReportDefinitionResponse * const q) : CostandUsageReportServiceResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CostandUsageReportService DeleteReportDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReportDefinitionResponsePrivate::parseDeleteReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportDefinitionResponse"));
    /// @todo
}

} // namespace CostandUsageReportService
} // namespace QtAws
