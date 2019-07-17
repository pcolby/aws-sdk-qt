/*
    Copyright 2013-2019 Paul Colby

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

#include "updatedocumentresponse.h"
#include "updatedocumentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::UpdateDocumentResponse
 * \brief The UpdateDocumentResponse class provides an interace for WorkDocs UpdateDocument responses.
 *
 * \inmodule QtAwsWorkDocs
 *
 *  The WorkDocs API is designed for the following use
 * 
 *  cases> <ul> <li>
 * 
 *  File Migration: File migration applications are supported for users who want to migrate their files from an on-premises
 *  or off-premises file system or service. Users can insert files into a user directory structure, as well as allow for
 *  basic metadata changes, such as modifications to the permissions of
 * 
 *  files> </li> <li>
 * 
 *  Security: Support security applications are supported for users who have additional security needs, such as antivirus or
 *  data loss prevention. The API actions, along with AWS CloudTrail, allow these applications to detect when changes occur
 *  in Amazon WorkDocs. Then, the application can take the necessary actions and replace the target file. If the target file
 *  violates the policy, the application can also choose to email the
 * 
 *  user> </li> <li>
 * 
 *  eDiscovery/Analytics: General administrative applications are supported, such as eDiscovery and analytics. These
 *  applications can choose to mimic or record the actions in an Amazon WorkDocs site, along with AWS CloudTrail, to
 *  replicate data for eDiscovery, backup, or analytical
 * 
 *  applications> </li> </ul>
 * 
 *  All Amazon WorkDocs API actions are Amazon authenticated and certificate-signed. They not only require the use of the
 *  AWS SDK, but also allow for the exclusive use of IAM users and roles to help facilitate access, trust, and permission
 *  policies. By creating a role and allowing an IAM user to access the Amazon WorkDocs site, the IAM user gains full
 *  administrative visibility into the entire Amazon WorkDocs site (or as set in the IAM policy). This includes, but is not
 *  limited to, the ability to modify file permissions and upload any file to any user. This allows developers to perform
 *  the three use cases above, as well as give users the ability to grant access on a selective basis using the IAM
 *
 * \sa WorkDocsClient::updateDocument
 */

/*!
 * Constructs a UpdateDocumentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDocumentResponse::UpdateDocumentResponse(
        const UpdateDocumentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new UpdateDocumentResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDocumentRequest * UpdateDocumentResponse::request() const
{
    Q_D(const UpdateDocumentResponse);
    return static_cast<const UpdateDocumentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkDocs UpdateDocument \a response.
 */
void UpdateDocumentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDocumentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkDocs::UpdateDocumentResponsePrivate
 * \brief The UpdateDocumentResponsePrivate class provides private implementation for UpdateDocumentResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a UpdateDocumentResponsePrivate object with public implementation \a q.
 */
UpdateDocumentResponsePrivate::UpdateDocumentResponsePrivate(
    UpdateDocumentResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/*!
 * Parses a WorkDocs UpdateDocument response element from \a xml.
 */
void UpdateDocumentResponsePrivate::parseUpdateDocumentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkDocs
} // namespace QtAws
