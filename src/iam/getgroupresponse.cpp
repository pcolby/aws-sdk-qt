// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupresponse.h"
#include "getgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetGroupResponse
 * \brief The GetGroupResponse class provides an interace for Iam GetGroup responses.
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
 * \sa IamClient::getGroup
 */

/*!
 * Constructs a GetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupResponse::GetGroupResponse(
        const GetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new GetGroupResponsePrivate(this), parent)
{
    setRequest(new GetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupRequest * GetGroupResponse::request() const
{
    Q_D(const GetGroupResponse);
    return static_cast<const GetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam GetGroup \a response.
 */
void GetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::GetGroupResponsePrivate
 * \brief The GetGroupResponsePrivate class provides private implementation for GetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetGroupResponsePrivate object with public implementation \a q.
 */
GetGroupResponsePrivate::GetGroupResponsePrivate(
    GetGroupResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam GetGroup response element from \a xml.
 */
void GetGroupResponsePrivate::parseGetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
