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

#include "untagsamlproviderresponse.h"
#include "untagsamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagSAMLProviderResponse
 * \brief The UntagSAMLProviderResponse class provides an interace for Iam UntagSAMLProvider responses.
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
 * \sa IamClient::untagSAMLProvider
 */

/*!
 * Constructs a UntagSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
UntagSAMLProviderResponse::UntagSAMLProviderResponse(
        const UntagSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new UntagSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new UntagSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UntagSAMLProviderRequest * UntagSAMLProviderResponse::request() const
{
    Q_D(const UntagSAMLProviderResponse);
    return static_cast<const UntagSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam UntagSAMLProvider \a response.
 */
void UntagSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UntagSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::UntagSAMLProviderResponsePrivate
 * \brief The UntagSAMLProviderResponsePrivate class provides private implementation for UntagSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagSAMLProviderResponsePrivate object with public implementation \a q.
 */
UntagSAMLProviderResponsePrivate::UntagSAMLProviderResponsePrivate(
    UntagSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam UntagSAMLProvider response element from \a xml.
 */
void UntagSAMLProviderResponsePrivate::parseUntagSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UntagSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
