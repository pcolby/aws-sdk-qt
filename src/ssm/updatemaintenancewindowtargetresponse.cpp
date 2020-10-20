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

#include "updatemaintenancewindowtargetresponse.h"
#include "updatemaintenancewindowtargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/*!
 * \class QtAws::SSM::UpdateMaintenanceWindowTargetResponse
 * \brief The UpdateMaintenanceWindowTargetResponse class provides an interace for SSM UpdateMaintenanceWindowTarget responses.
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
 * \sa SsmClient::updateMaintenanceWindowTarget
 */

/*!
 * Constructs a UpdateMaintenanceWindowTargetResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateMaintenanceWindowTargetResponse::UpdateMaintenanceWindowTargetResponse(
        const UpdateMaintenanceWindowTargetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SsmResponse(new UpdateMaintenanceWindowTargetResponsePrivate(this), parent)
{
    setRequest(new UpdateMaintenanceWindowTargetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateMaintenanceWindowTargetRequest * UpdateMaintenanceWindowTargetResponse::request() const
{
    Q_D(const UpdateMaintenanceWindowTargetResponse);
    return static_cast<const UpdateMaintenanceWindowTargetRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSM UpdateMaintenanceWindowTarget \a response.
 */
void UpdateMaintenanceWindowTargetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateMaintenanceWindowTargetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSM::UpdateMaintenanceWindowTargetResponsePrivate
 * \brief The UpdateMaintenanceWindowTargetResponsePrivate class provides private implementation for UpdateMaintenanceWindowTargetResponse.
 * \internal
 *
 * \inmodule QtAwsSSM
 */

/*!
 * Constructs a UpdateMaintenanceWindowTargetResponsePrivate object with public implementation \a q.
 */
UpdateMaintenanceWindowTargetResponsePrivate::UpdateMaintenanceWindowTargetResponsePrivate(
    UpdateMaintenanceWindowTargetResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a SSM UpdateMaintenanceWindowTarget response element from \a xml.
 */
void UpdateMaintenanceWindowTargetResponsePrivate::parseUpdateMaintenanceWindowTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMaintenanceWindowTargetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSM
} // namespace QtAws
