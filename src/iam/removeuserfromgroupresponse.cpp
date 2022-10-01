// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeuserfromgroupresponse.h"
#include "removeuserfromgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveUserFromGroupResponse
 * \brief The RemoveUserFromGroupResponse class provides an interace for Iam RemoveUserFromGroup responses.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::removeUserFromGroup
 */

/*!
 * Constructs a RemoveUserFromGroupResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveUserFromGroupResponse::RemoveUserFromGroupResponse(
        const RemoveUserFromGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new RemoveUserFromGroupResponsePrivate(this), parent)
{
    setRequest(new RemoveUserFromGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveUserFromGroupRequest * RemoveUserFromGroupResponse::request() const
{
    Q_D(const RemoveUserFromGroupResponse);
    return static_cast<const RemoveUserFromGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam RemoveUserFromGroup \a response.
 */
void RemoveUserFromGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveUserFromGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::RemoveUserFromGroupResponsePrivate
 * \brief The RemoveUserFromGroupResponsePrivate class provides private implementation for RemoveUserFromGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveUserFromGroupResponsePrivate object with public implementation \a q.
 */
RemoveUserFromGroupResponsePrivate::RemoveUserFromGroupResponsePrivate(
    RemoveUserFromGroupResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam RemoveUserFromGroup response element from \a xml.
 */
void RemoveUserFromGroupResponsePrivate::parseRemoveUserFromGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveUserFromGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
