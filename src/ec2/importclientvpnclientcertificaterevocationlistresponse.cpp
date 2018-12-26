/*
    Copyright 2013-2018 Paul Colby

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

#include "importclientvpnclientcertificaterevocationlistresponse.h"
#include "importclientvpnclientcertificaterevocationlistresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::ImportClientVpnClientCertificateRevocationListResponse
 * \brief The ImportClientVpnClientCertificateRevocationListResponse class provides an interace for EC2 ImportClientVpnClientCertificateRevocationList responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::importClientVpnClientCertificateRevocationList
 */

/*!
 * Constructs a ImportClientVpnClientCertificateRevocationListResponse object for \a reply to \a request, with parent \a parent.
 */
ImportClientVpnClientCertificateRevocationListResponse::ImportClientVpnClientCertificateRevocationListResponse(
        const ImportClientVpnClientCertificateRevocationListRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new ImportClientVpnClientCertificateRevocationListResponsePrivate(this), parent)
{
    setRequest(new ImportClientVpnClientCertificateRevocationListRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportClientVpnClientCertificateRevocationListRequest * ImportClientVpnClientCertificateRevocationListResponse::request() const
{
    Q_D(const ImportClientVpnClientCertificateRevocationListResponse);
    return static_cast<const ImportClientVpnClientCertificateRevocationListRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 ImportClientVpnClientCertificateRevocationList \a response.
 */
void ImportClientVpnClientCertificateRevocationListResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportClientVpnClientCertificateRevocationListResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::ImportClientVpnClientCertificateRevocationListResponsePrivate
 * \brief The ImportClientVpnClientCertificateRevocationListResponsePrivate class provides private implementation for ImportClientVpnClientCertificateRevocationListResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a ImportClientVpnClientCertificateRevocationListResponsePrivate object with public implementation \a q.
 */
ImportClientVpnClientCertificateRevocationListResponsePrivate::ImportClientVpnClientCertificateRevocationListResponsePrivate(
    ImportClientVpnClientCertificateRevocationListResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 ImportClientVpnClientCertificateRevocationList response element from \a xml.
 */
void ImportClientVpnClientCertificateRevocationListResponsePrivate::parseImportClientVpnClientCertificateRevocationListResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportClientVpnClientCertificateRevocationListResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
