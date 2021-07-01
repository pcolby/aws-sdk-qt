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

#include "listeventintegrationsresponse.h"
#include "listeventintegrationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::ListEventIntegrationsResponse
 * \brief The ListEventIntegrationsResponse class provides an interace for AppIntegrationsService ListEventIntegrations responses.
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
 * \sa AppIntegrationsServiceClient::listEventIntegrations
 */

/*!
 * Constructs a ListEventIntegrationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListEventIntegrationsResponse::ListEventIntegrationsResponse(
        const ListEventIntegrationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppIntegrationsServiceResponse(new ListEventIntegrationsResponsePrivate(this), parent)
{
    setRequest(new ListEventIntegrationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEventIntegrationsRequest * ListEventIntegrationsResponse::request() const
{
    Q_D(const ListEventIntegrationsResponse);
    return static_cast<const ListEventIntegrationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppIntegrationsService ListEventIntegrations \a response.
 */
void ListEventIntegrationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEventIntegrationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppIntegrationsService::ListEventIntegrationsResponsePrivate
 * \brief The ListEventIntegrationsResponsePrivate class provides private implementation for ListEventIntegrationsResponse.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a ListEventIntegrationsResponsePrivate object with public implementation \a q.
 */
ListEventIntegrationsResponsePrivate::ListEventIntegrationsResponsePrivate(
    ListEventIntegrationsResponse * const q) : AppIntegrationsServiceResponsePrivate(q)
{

}

/*!
 * Parses a AppIntegrationsService ListEventIntegrations response element from \a xml.
 */
void ListEventIntegrationsResponsePrivate::parseListEventIntegrationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEventIntegrationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppIntegrationsService
} // namespace QtAws
