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

#include "deleteplatformapplicationresponse.h"
#include "deleteplatformapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::DeletePlatformApplicationResponse
 * \brief The DeletePlatformApplicationResponse class provides an interace for SNS DeletePlatformApplication responses.
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
 * \sa SnsClient::deletePlatformApplication
 */

/*!
 * Constructs a DeletePlatformApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePlatformApplicationResponse::DeletePlatformApplicationResponse(
        const DeletePlatformApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new DeletePlatformApplicationResponsePrivate(this), parent)
{
    setRequest(new DeletePlatformApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePlatformApplicationRequest * DeletePlatformApplicationResponse::request() const
{
    Q_D(const DeletePlatformApplicationResponse);
    return static_cast<const DeletePlatformApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS DeletePlatformApplication \a response.
 */
void DeletePlatformApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePlatformApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::DeletePlatformApplicationResponsePrivate
 * \brief The DeletePlatformApplicationResponsePrivate class provides private implementation for DeletePlatformApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a DeletePlatformApplicationResponsePrivate object with public implementation \a q.
 */
DeletePlatformApplicationResponsePrivate::DeletePlatformApplicationResponsePrivate(
    DeletePlatformApplicationResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS DeletePlatformApplication response element from \a xml.
 */
void DeletePlatformApplicationResponsePrivate::parseDeletePlatformApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlatformApplicationResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
