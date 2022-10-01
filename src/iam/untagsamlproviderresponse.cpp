// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
