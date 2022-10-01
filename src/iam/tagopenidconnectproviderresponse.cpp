// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagopenidconnectproviderresponse.h"
#include "tagopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagOpenIDConnectProviderResponse
 * \brief The TagOpenIDConnectProviderResponse class provides an interace for Iam TagOpenIDConnectProvider responses.
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
 * \sa IamClient::tagOpenIDConnectProvider
 */

/*!
 * Constructs a TagOpenIDConnectProviderResponse object for \a reply to \a request, with parent \a parent.
 */
TagOpenIDConnectProviderResponse::TagOpenIDConnectProviderResponse(
        const TagOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new TagOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new TagOpenIDConnectProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TagOpenIDConnectProviderRequest * TagOpenIDConnectProviderResponse::request() const
{
    Q_D(const TagOpenIDConnectProviderResponse);
    return static_cast<const TagOpenIDConnectProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam TagOpenIDConnectProvider \a response.
 */
void TagOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TagOpenIDConnectProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::TagOpenIDConnectProviderResponsePrivate
 * \brief The TagOpenIDConnectProviderResponsePrivate class provides private implementation for TagOpenIDConnectProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagOpenIDConnectProviderResponsePrivate object with public implementation \a q.
 */
TagOpenIDConnectProviderResponsePrivate::TagOpenIDConnectProviderResponsePrivate(
    TagOpenIDConnectProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam TagOpenIDConnectProvider response element from \a xml.
 */
void TagOpenIDConnectProviderResponsePrivate::parseTagOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TagOpenIDConnectProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
