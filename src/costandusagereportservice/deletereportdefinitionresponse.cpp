/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The DeleteReportDefinitionResponse class provides an interace for CostandUsageReportService DeleteReportDefinition responses.
 *
 * \inmodule QtAwsCostandUsageReportService
 *
 *
 * \sa CostandUsageReportServiceClient::deleteReportDefinition
 */

/*!
 * Constructs a DeleteReportDefinitionResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DeleteReportDefinitionRequest * DeleteReportDefinitionResponse::request() const
{
    Q_D(const DeleteReportDefinitionResponse);
    return static_cast<const DeleteReportDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CostandUsageReportService DeleteReportDefinition \a response.
 */
void DeleteReportDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReportDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CostandUsageReportService::DeleteReportDefinitionResponsePrivate
 * \brief The DeleteReportDefinitionResponsePrivate class provides private implementation for DeleteReportDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsCostandUsageReportService
 */

/*!
 * Constructs a DeleteReportDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteReportDefinitionResponsePrivate::DeleteReportDefinitionResponsePrivate(
    DeleteReportDefinitionResponse * const q) : CostandUsageReportServiceResponsePrivate(q)
{

}

/*!
 * Parses a CostandUsageReportService DeleteReportDefinition response element from \a xml.
 */
void DeleteReportDefinitionResponsePrivate::parseDeleteReportDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReportDefinitionResponse"));
    /// @todo
}

} // namespace CostandUsageReportService
} // namespace QtAws
