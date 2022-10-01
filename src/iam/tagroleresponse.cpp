// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagroleresponse.h"
#include "tagroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagRoleResponse
 * \brief The TagRoleResponse class provides an interace for Iam TagRole responses.
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
 * \sa IamClient::tagRole
 */

/*!
 * Constructs a TagRoleResponse object for \a reply to \a request, with parent \a parent.
 */
TagRoleResponse::TagRoleResponse(
        const TagRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagRoleResponsePrivate(this), parent)
{
    setRequest(new TagRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagRoleRequest * TagRoleResponse::request() const
{
    Q_D(const TagRoleResponse);
    return static_cast<const TagRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagRole \a response.
 */
void TagRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagRoleResponsePrivate
 * \brief The TagRoleResponsePrivate class provides private implementation for TagRoleResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagRoleResponsePrivate object with public implementation \a q.
 */
TagRoleResponsePrivate::TagRoleResponsePrivate(
    TagRoleResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagRole response element from \a xml.
 */
void TagRoleResponsePrivate::parseTagRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
