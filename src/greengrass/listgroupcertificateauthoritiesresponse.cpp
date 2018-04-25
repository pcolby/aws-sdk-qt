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

#include "listgroupcertificateauthoritiesresponse.h"
#include "listgroupcertificateauthoritiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupCertificateAuthoritiesResponse
 * \brief The ListGroupCertificateAuthoritiesResponse class provides an interace for Greengrass ListGroupCertificateAuthorities responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listGroupCertificateAuthorities
 */

/*!
 * Constructs a ListGroupCertificateAuthoritiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListGroupCertificateAuthoritiesResponse::ListGroupCertificateAuthoritiesResponse(
        const ListGroupCertificateAuthoritiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListGroupCertificateAuthoritiesResponsePrivate(this), parent)
{
    setRequest(new ListGroupCertificateAuthoritiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListGroupCertificateAuthoritiesRequest * ListGroupCertificateAuthoritiesResponse::request() const
{
    Q_D(const ListGroupCertificateAuthoritiesResponse);
    return static_cast<const ListGroupCertificateAuthoritiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass ListGroupCertificateAuthorities \a response.
 */
void ListGroupCertificateAuthoritiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGroupCertificateAuthoritiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::ListGroupCertificateAuthoritiesResponsePrivate
 * \brief The ListGroupCertificateAuthoritiesResponsePrivate class provides private implementation for ListGroupCertificateAuthoritiesResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a ListGroupCertificateAuthoritiesResponsePrivate object with public implementation \a q.
 */
ListGroupCertificateAuthoritiesResponsePrivate::ListGroupCertificateAuthoritiesResponsePrivate(
    ListGroupCertificateAuthoritiesResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass ListGroupCertificateAuthorities response element from \a xml.
 */
void ListGroupCertificateAuthoritiesResponsePrivate::parseListGroupCertificateAuthoritiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGroupCertificateAuthoritiesResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
