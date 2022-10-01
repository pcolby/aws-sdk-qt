// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "taguserresponse.h"
#include "taguserresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagUserResponse
 * \brief The TagUserResponse class provides an interace for Iam TagUser responses.
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
 * \sa IamClient::tagUser
 */

/*!
 * Constructs a TagUserResponse object for \a reply to \a request, with parent \a parent.
 */
TagUserResponse::TagUserResponse(
        const TagUserRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagUserResponsePrivate(this), parent)
{
    setRequest(new TagUserRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagUserRequest * TagUserResponse::request() const
{
    Q_D(const TagUserResponse);
    return static_cast<const TagUserRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagUser \a response.
 */
void TagUserResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagUserResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagUserResponsePrivate
 * \brief The TagUserResponsePrivate class provides private implementation for TagUserResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagUserResponsePrivate object with public implementation \a q.
 */
TagUserResponsePrivate::TagUserResponsePrivate(
    TagUserResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagUser response element from \a xml.
 */
void TagUserResponsePrivate::parseTagUserResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagUserResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
