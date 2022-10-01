// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addusertogroupresponse.h"
#include "addusertogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::AddUserToGroupResponse
 * \brief The AddUserToGroupResponse class provides an interace for Iam AddUserToGroup responses.
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
 * \sa IamClient::addUserToGroup
 */

/*!
 * Constructs a AddUserToGroupResponse object for \a reply to \a request, with parent \a parent.
 */
AddUserToGroupResponse::AddUserToGroupResponse(
        const AddUserToGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new AddUserToGroupResponsePrivate(this), parent)
{
    setRequest(new AddUserToGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AddUserToGroupRequest * AddUserToGroupResponse::request() const
{
    Q_D(const AddUserToGroupResponse);
    return static_cast<const AddUserToGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam AddUserToGroup \a response.
 */
void AddUserToGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AddUserToGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::AddUserToGroupResponsePrivate
 * \brief The AddUserToGroupResponsePrivate class provides private implementation for AddUserToGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a AddUserToGroupResponsePrivate object with public implementation \a q.
 */
AddUserToGroupResponsePrivate::AddUserToGroupResponsePrivate(
    AddUserToGroupResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam AddUserToGroup response element from \a xml.
 */
void AddUserToGroupResponsePrivate::parseAddUserToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddUserToGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
