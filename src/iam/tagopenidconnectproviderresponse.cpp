/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
