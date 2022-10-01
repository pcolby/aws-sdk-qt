// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updategroupresponse.h"
#include "updategroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateGroupResponse
 * \brief The UpdateGroupResponse class provides an interace for Iam UpdateGroup responses.
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
 * \sa IamClient::updateGroup
 */

/*!
 * Constructs a UpdateGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGroupResponse::UpdateGroupResponse(
        const UpdateGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UpdateGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGroupRequest * UpdateGroupResponse::request() const
{
    Q_D(const UpdateGroupResponse);
    return static_cast<const UpdateGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UpdateGroup \a response.
 */
void UpdateGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UpdateGroupResponsePrivate
 * \brief The UpdateGroupResponsePrivate class provides private implementation for UpdateGroupResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateGroupResponsePrivate object with public implementation \a q.
 */
UpdateGroupResponsePrivate::UpdateGroupResponsePrivate(
    UpdateGroupResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UpdateGroup response element from \a xml.
 */
void UpdateGroupResponsePrivate::parseUpdateGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
