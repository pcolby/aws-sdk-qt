/*
    Copyright 2013-2019 Paul Colby

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

#include "putinventoryresponse.h"
#include "putinventoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::PutInventoryResponse
 * \brief The PutInventoryResponse class provides an interace for SSM PutInventory responses.
 *
 * \inmodule QtAwsSSM
 *
 *  <fullname>AWS Systems Manager</fullname>
 * 
 *  AWS Systems Manager is a collection of capabilities that helps you automate management tasks such as collecting system
 *  inventory, applying operating system (OS) patches, automating the creation of Amazon Machine Images (AMIs), and
 *  configuring operating systems (OSs) and applications at scale. Systems Manager lets you remotely and securely manage the
 *  configuration of your managed instances. A <i>managed instance</i> is any Amazon EC2 instance or on-premises machine in
 *  your hybrid environment that has been configured for Systems
 * 
 *  Manager>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/">AWS Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites and configure managed instances. For more information, see <a
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting Up AWS
 *  Systems Manager</a> in the <i>AWS Systems Manager User
 * 
 *  Guide</i>>
 * 
 *  For information about other API actions you can perform on Amazon EC2 instances, see the <a
 *  href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API Reference</a>. For information about how to
 *  use a Query API, see <a href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API
 *  Requests</a>.
 *
 * \sa SsmClient::putInventory
 */

/*!
 * Constructs a PutInventoryResponse object for \a reply to \a request, with parent \a parent.
 */
PutInventoryResponse::PutInventoryResponse(
        const PutInventoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new PutInventoryResponsePrivate(this), parent)
{
    setRequest(new PutInventoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutInventoryRequest * PutInventoryResponse::request() const
{
    Q_D(const PutInventoryResponse);
    return static_cast<const PutInventoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM PutInventory \a response.
 */
void PutInventoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutInventoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::PutInventoryResponsePrivate
 * \brief The PutInventoryResponsePrivate class provides private implementation for PutInventoryResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a PutInventoryResponsePrivate object with public implementation \a q.
 */
PutInventoryResponsePrivate::PutInventoryResponsePrivate(
    PutInventoryResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM PutInventory response element from \a xml.
 */
void PutInventoryResponsePrivate::parsePutInventoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInventoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
