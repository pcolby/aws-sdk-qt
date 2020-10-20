/*
    Copyright 2013-2020 Paul Colby

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

#include "deletemaintenancewindowresponse.h"
#include "deletemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::DeleteMaintenanceWindowResponse
 * \brief The DeleteMaintenanceWindowResponse class provides an interace for SSM DeleteMaintenanceWindow responses.
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
 * \sa SsmClient::deleteMaintenanceWindow
 */

/*!
 * Constructs a DeleteMaintenanceWindowResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMaintenanceWindowResponse::DeleteMaintenanceWindowResponse(
        const DeleteMaintenanceWindowRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new DeleteMaintenanceWindowResponsePrivate(this), parent)
{
    setRequest(new DeleteMaintenanceWindowRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMaintenanceWindowRequest * DeleteMaintenanceWindowResponse::request() const
{
    Q_D(const DeleteMaintenanceWindowResponse);
    return static_cast<const DeleteMaintenanceWindowRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM DeleteMaintenanceWindow \a response.
 */
void DeleteMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMaintenanceWindowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::DeleteMaintenanceWindowResponsePrivate
 * \brief The DeleteMaintenanceWindowResponsePrivate class provides private implementation for DeleteMaintenanceWindowResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a DeleteMaintenanceWindowResponsePrivate object with public implementation \a q.
 */
DeleteMaintenanceWindowResponsePrivate::DeleteMaintenanceWindowResponsePrivate(
    DeleteMaintenanceWindowResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM DeleteMaintenanceWindow response element from \a xml.
 */
void DeleteMaintenanceWindowResponsePrivate::parseDeleteMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMaintenanceWindowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
