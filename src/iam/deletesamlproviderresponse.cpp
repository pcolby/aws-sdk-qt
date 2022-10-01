// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesamlproviderresponse.h"
#include "deletesamlproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteSAMLProviderResponse
 * \brief The DeleteSAMLProviderResponse class provides an interace for Iam DeleteSAMLProvider responses.
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
 * \sa IamClient::deleteSAMLProvider
 */

/*!
 * Constructs a DeleteSAMLProviderResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSAMLProviderResponse::DeleteSAMLProviderResponse(
        const DeleteSAMLProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IamResponse(new DeleteSAMLProviderResponsePrivate(this), parent)
{
    setRequest(new DeleteSAMLProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSAMLProviderRequest * DeleteSAMLProviderResponse::request() const
{
    Q_D(const DeleteSAMLProviderResponse);
    return static_cast<const DeleteSAMLProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Iam DeleteSAMLProvider \a response.
 */
void DeleteSAMLProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSAMLProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Iam::DeleteSAMLProviderResponsePrivate
 * \brief The DeleteSAMLProviderResponsePrivate class provides private implementation for DeleteSAMLProviderResponse.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteSAMLProviderResponsePrivate object with public implementation \a q.
 */
DeleteSAMLProviderResponsePrivate::DeleteSAMLProviderResponsePrivate(
    DeleteSAMLProviderResponse * const q) : IamResponsePrivate(q)
{

}

/*!
 * Parses a Iam DeleteSAMLProvider response element from \a xml.
 */
void DeleteSAMLProviderResponsePrivate::parseDeleteSAMLProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSAMLProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Iam
} // namespace QtAws
