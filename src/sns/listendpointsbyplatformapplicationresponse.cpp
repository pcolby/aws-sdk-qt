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

#include "listendpointsbyplatformapplicationresponse.h"
#include "listendpointsbyplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::ListEndpointsByPlatformApplicationResponse
 * \brief The ListEndpointsByPlatformApplicationResponse class provides an interace for SNS ListEndpointsByPlatformApplication responses.
 *
 * \inmodule QtAwsSNS
 *
 *  <fullname>Amazon Simple Notification Service</fullname>
 * 
 *  Amazon Simple Notification Service (Amazon SNS) is a web service that enables you to build distributed web-enabled
 *  applications. Applications can use Amazon SNS to easily push real-time notification messages to interested subscribers
 *  over multiple delivery protocols. For more information about this product see <a
 *  href="http://aws.amazon.com/sns/">http://aws.amazon.com/sns</a>. For detailed information about Amazon SNS features and
 *  their associated API calls, see the <a href="http://docs.aws.amazon.com/sns/latest/dg/">Amazon SNS Developer Guide</a>.
 * 
 *  </p
 * 
 *  We also provide SDKs that enable you to access Amazon SNS from your preferred programming language. The SDKs contain
 *  functionality that automatically takes care of tasks such as: cryptographically signing your service requests, retrying
 *  requests, and handling error responses. For a list of available SDKs, go to <a href="http://aws.amazon.com/tools/">Tools
 *  for Amazon Web Services</a>.
 *
 * \sa SnsClient::listEndpointsByPlatformApplication
 */

/*!
 * Constructs a ListEndpointsByPlatformApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
ListEndpointsByPlatformApplicationResponse::ListEndpointsByPlatformApplicationResponse(
        const ListEndpointsByPlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new ListEndpointsByPlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new ListEndpointsByPlatformApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListEndpointsByPlatformApplicationRequest * ListEndpointsByPlatformApplicationResponse::request() const
{
    Q_D(const ListEndpointsByPlatformApplicationResponse);
    return static_cast<const ListEndpointsByPlatformApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS ListEndpointsByPlatformApplication \a response.
 */
void ListEndpointsByPlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListEndpointsByPlatformApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::ListEndpointsByPlatformApplicationResponsePrivate
 * \brief The ListEndpointsByPlatformApplicationResponsePrivate class provides private implementation for ListEndpointsByPlatformApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a ListEndpointsByPlatformApplicationResponsePrivate object with public implementation \a q.
 */
ListEndpointsByPlatformApplicationResponsePrivate::ListEndpointsByPlatformApplicationResponsePrivate(
    ListEndpointsByPlatformApplicationResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS ListEndpointsByPlatformApplication response element from \a xml.
 */
void ListEndpointsByPlatformApplicationResponsePrivate::parseListEndpointsByPlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListEndpointsByPlatformApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SNS
} // namespace QtAws
