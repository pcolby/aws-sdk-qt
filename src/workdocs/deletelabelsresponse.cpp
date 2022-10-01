// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelabelsresponse.h"
#include "deletelabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/*!
 * \class QtAws::WorkDocs::DeleteLabelsResponse
 * \brief The DeleteLabelsResponse class provides an interace for WorkDocs DeleteLabels responses.
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
 * \sa WorkDocsClient::deleteLabels
 */

/*!
 * Constructs a DeleteLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLabelsResponse::DeleteLabelsResponse(
        const DeleteLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteLabelsResponsePrivate(this), parent)
{
    setRequest(new DeleteLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLabelsRequest * DeleteLabelsResponse::request() const
{
    Q_D(const DeleteLabelsResponse);
    return static_cast<const DeleteLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkDocs DeleteLabels \a response.
 */
void DeleteLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkDocs::DeleteLabelsResponsePrivate
 * \brief The DeleteLabelsResponsePrivate class provides private implementation for DeleteLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsWorkDocs
 */

/*!
 * Constructs a DeleteLabelsResponsePrivate object with public implementation \a q.
 */
DeleteLabelsResponsePrivate::DeleteLabelsResponsePrivate(
    DeleteLabelsResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/*!
 * Parses a WorkDocs DeleteLabels response element from \a xml.
 */
void DeleteLabelsResponsePrivate::parseDeleteLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkDocs
} // namespace QtAws
