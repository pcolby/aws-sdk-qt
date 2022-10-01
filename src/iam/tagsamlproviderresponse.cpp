// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagsamlproviderresponse.h"
#include "tagsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagSAMLProviderResponse
 * \brief The TagSAMLProviderResponse class provides an interace for Iam TagSAMLProvider responses.
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
 * \sa IamClient::tagSAMLProvider
 */

/*!
 * Constructs a TagSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
TagSAMLProviderResponse::TagSAMLProviderResponse(
        const TagSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new TagSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagSAMLProviderRequest * TagSAMLProviderResponse::request() const
{
    Q_D(const TagSAMLProviderResponse);
    return static_cast<const TagSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagSAMLProvider \a response.
 */
void TagSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagSAMLProviderResponsePrivate
 * \brief The TagSAMLProviderResponsePrivate class provides private implementation for TagSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagSAMLProviderResponsePrivate object with public implementation \a q.
 */
TagSAMLProviderResponsePrivate::TagSAMLProviderResponsePrivate(
    TagSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagSAMLProvider response element from \a xml.
 */
void TagSAMLProviderResponsePrivate::parseTagSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
