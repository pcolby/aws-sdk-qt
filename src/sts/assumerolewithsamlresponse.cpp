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

#include "assumerolewithsamlresponse.h"
#include "assumerolewithsamlresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sts {

/*!
 * \class QtAws::Sts::AssumeRoleWithSAMLResponse
 * \brief The AssumeRoleWithSAMLResponse class provides an interace for Sts AssumeRoleWithSAML responses.
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
 * \sa StsClient::assumeRoleWithSAML
 */

/*!
 * Constructs a AssumeRoleWithSAMLResponse object for \a reply to \a request, with parent \a parent.
 */
AssumeRoleWithSAMLResponse::AssumeRoleWithSAMLResponse(
        const AssumeRoleWithSAMLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StsResponse(new AssumeRoleWithSAMLResponsePrivate(this), parent)
{
    setRequest(new AssumeRoleWithSAMLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssumeRoleWithSAMLRequest * AssumeRoleWithSAMLResponse::request() const
{
    Q_D(const AssumeRoleWithSAMLResponse);
    return static_cast<const AssumeRoleWithSAMLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sts AssumeRoleWithSAML \a response.
 */
void AssumeRoleWithSAMLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssumeRoleWithSAMLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sts::AssumeRoleWithSAMLResponsePrivate
 * \brief The AssumeRoleWithSAMLResponsePrivate class provides private implementation for AssumeRoleWithSAMLResponse.
 * \internal
 *
 * \inmodule QtAwsSts
 */

/*!
 * Constructs a AssumeRoleWithSAMLResponsePrivate object with public implementation \a q.
 */
AssumeRoleWithSAMLResponsePrivate::AssumeRoleWithSAMLResponsePrivate(
    AssumeRoleWithSAMLResponse * const q) : StsResponsePrivate(q)
{

}

/*!
 * Parses a Sts AssumeRoleWithSAML response element from \a xml.
 */
void AssumeRoleWithSAMLResponsePrivate::parseAssumeRoleWithSAMLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssumeRoleWithSAMLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sts
} // namespace QtAws
