// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "assumeroleresponse.h"
#include "assumeroleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleResponse
 * \brief The AssumeRoleResponse class provides an interace for Sts AssumeRole responses.
 *
 * \inmodule QtAwsSts
 *
 *  <fullname>Security Token Service</fullname>
 * 
 *  Security Token Service (STS) enables you to request temporary, limited-privilege credentials for Identity and Access
 *  Management (IAM) users or for users that you authenticate (federated users). This guide provides descriptions of the STS
 *  API. For more information about using this service, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_credentials_temp.html">Temporary Security
 *
 * \sa StsClient::assumeRole
 */

/*!
 * Constructs a AssumeRoleResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeRoleResponse::AssumeRoleResponse(
        const AssumeRoleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new AssumeRoleResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeRoleRequest * AssumeRoleResponse::request() const
{
    Q_D(const AssumeRoleResponse);
    return static_cast<const AssumeRoleRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts AssumeRole \a response.
 */
void AssumeRoleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeRoleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::AssumeRoleResponsePrivate
 * \brief The AssumeRoleResponsePrivate class provides private implementation for AssumeRoleResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleResponsePrivate object with public implementation \a q.
 */
AssumeRoleResponsePrivate::AssumeRoleResponsePrivate(
    AssumeRoleResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts AssumeRole response element from \a xml.
 */
void AssumeRoleResponsePrivate::parseAssumeRoleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
