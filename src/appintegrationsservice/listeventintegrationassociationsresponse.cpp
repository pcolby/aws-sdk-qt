/*
    Copyright 2013-2021 Paul Colby

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

#include "listeventintegrationassociationsresponse.h"
#include "listeventintegrationassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::ListEventIntegrationAssociationsResponse
 * \brief The ListEventIntegrationAssociationsResponse class provides an interace for AppIntegrationsService ListEventIntegrationAssociations responses.
 *
 * \inmodule QtAwsAppIntegrationsService
 *
 *  The Amazon AppIntegrations APIs are in preview release and are subject to
 * 
 *  change>
 * 
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> in the <i>Amazon
 *  Connect Administrator
 *
 * \sa AppIntegrationsServiceClient::listEventIntegrationAssociations
 */

/*!
 * Constructs a ListEventIntegrationAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventIntegrationAssociationsResponse::ListEventIntegrationAssociationsResponse(
        const ListEventIntegrationAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsServiceResponse(new ListEventIntegrationAssociationsResponsePrivate(this), parent)
{
    setRequest(new ListEventIntegrationAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventIntegrationAssociationsRequest * ListEventIntegrationAssociationsResponse::request() const
{
    Q_D(const ListEventIntegrationAssociationsResponse);
    return static_cast<const ListEventIntegrationAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrationsService ListEventIntegrationAssociations \a response.
 */
void ListEventIntegrationAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventIntegrationAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrationsService::ListEventIntegrationAssociationsResponsePrivate
 * \brief The ListEventIntegrationAssociationsResponsePrivate class provides private implementation for ListEventIntegrationAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a ListEventIntegrationAssociationsResponsePrivate object with public implementation \a q.
 */
ListEventIntegrationAssociationsResponsePrivate::ListEventIntegrationAssociationsResponsePrivate(
    ListEventIntegrationAssociationsResponse * const q) : AppIntegrationsServiceResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrationsService ListEventIntegrationAssociations response element from \a xml.
 */
void ListEventIntegrationAssociationsResponsePrivate::parseListEventIntegrationAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventIntegrationAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrationsService
} // namespace QtAws
