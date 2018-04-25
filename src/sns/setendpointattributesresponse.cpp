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

#include "setendpointattributesresponse.h"
#include "setendpointattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SetEndpointAttributesResponse
 * \brief The SetEndpointAttributesResponse class provides an interace for SNS SetEndpointAttributes responses.
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
 * \sa SnsClient::setEndpointAttributes
 */

/*!
 * Constructs a SetEndpointAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
SetEndpointAttributesResponse::SetEndpointAttributesResponse(
        const SetEndpointAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new SetEndpointAttributesResponsePrivate(this), parent)
{
    setRequest(new SetEndpointAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SetEndpointAttributesRequest * SetEndpointAttributesResponse::request() const
{
    Q_D(const SetEndpointAttributesResponse);
    return static_cast<const SetEndpointAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS SetEndpointAttributes \a response.
 */
void SetEndpointAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetEndpointAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::SetEndpointAttributesResponsePrivate
 * \brief The SetEndpointAttributesResponsePrivate class provides private implementation for SetEndpointAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SetEndpointAttributesResponsePrivate object with public implementation \a q.
 */
SetEndpointAttributesResponsePrivate::SetEndpointAttributesResponsePrivate(
    SetEndpointAttributesResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS SetEndpointAttributes response element from \a xml.
 */
void SetEndpointAttributesResponsePrivate::parseSetEndpointAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetEndpointAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
