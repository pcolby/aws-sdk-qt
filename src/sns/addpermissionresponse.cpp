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

#include "addpermissionresponse.h"
#include "addpermissionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::AddPermissionResponse
 * \brief The AddPermissionResponse class provides an interace for SNS AddPermission responses.
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
 * \sa SnsClient::addPermission
 */

/*!
 * Constructs a AddPermissionResponse object for \a reply to \a request, with parent \a parent.
 */
AddPermissionResponse::AddPermissionResponse(
        const AddPermissionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnsResponse(new AddPermissionResponsePrivate(this), parent)
{
    setRequest(new AddPermissionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddPermissionRequest * AddPermissionResponse::request() const
{
    Q_D(const AddPermissionResponse);
    return static_cast<const AddPermissionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SNS AddPermission \a response.
 */
void AddPermissionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddPermissionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SNS::AddPermissionResponsePrivate
 * \brief The AddPermissionResponsePrivate class provides private implementation for AddPermissionResponse.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a AddPermissionResponsePrivate object with public implementation \a q.
 */
AddPermissionResponsePrivate::AddPermissionResponsePrivate(
    AddPermissionResponse * const q) : SnsResponsePrivate(q)
{

}

/*!
 * Parses a SNS AddPermission response element from \a xml.
 */
void AddPermissionResponsePrivate::parseAddPermissionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddPermissionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SNS
} // namespace QtAws
