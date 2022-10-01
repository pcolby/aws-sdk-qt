// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "taginstanceprofileresponse.h"
#include "taginstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagInstanceProfileResponse
 * \brief The TagInstanceProfileResponse class provides an interace for Iam TagInstanceProfile responses.
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
 * \sa IamClient::tagInstanceProfile
 */

/*!
 * Constructs a TagInstanceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
TagInstanceProfileResponse::TagInstanceProfileResponse(
        const TagInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new TagInstanceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagInstanceProfileRequest * TagInstanceProfileResponse::request() const
{
    Q_D(const TagInstanceProfileResponse);
    return static_cast<const TagInstanceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagInstanceProfile \a response.
 */
void TagInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagInstanceProfileResponsePrivate
 * \brief The TagInstanceProfileResponsePrivate class provides private implementation for TagInstanceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagInstanceProfileResponsePrivate object with public implementation \a q.
 */
TagInstanceProfileResponsePrivate::TagInstanceProfileResponsePrivate(
    TagInstanceProfileResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagInstanceProfile response element from \a xml.
 */
void TagInstanceProfileResponsePrivate::parseTagInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagInstanceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
