// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemaintenancewindowresponse.h"
#include "deletemaintenancewindowresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ssm {

/*!
 * \class QtAws::Ssm::DeleteMaintenanceWindowResponse
 * \brief The DeleteMaintenanceWindowResponse class provides an interace for Ssm DeleteMaintenanceWindow responses.
 *
 * \inmodule QtAwsSsm
 *
 *  Amazon Web Services Systems Manager is a collection of capabilities to help you manage your applications and
 *  infrastructure running in the Amazon Web Services Cloud;. Systems Manager simplifies application and resource
 *  management, shortens the time to detect and resolve operational problems, and helps you manage your Amazon Web Services
 *  resources securely at
 * 
 *  scale>
 * 
 *  This reference is intended to be used with the <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/">Amazon Web Services Systems Manager User
 * 
 *  Guide</a>>
 * 
 *  To get started, verify prerequisites. For more information, see <a
 *  href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting up Amazon
 *  Web Services Systems
 * 
 *  Manager</a>> <p class="title"> <b>Related resources</b>
 * 
 *  </p <ul> <li>
 * 
 *  For information about how to use a Query API, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/making-api-requests.html">Making API requests</a>.
 * 
 *  </p </li> <li>
 * 
 *  For information about other API operations you can perform on EC2 instances, see the <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/">Amazon EC2 API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about AppConfig, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/appconfig/latest/userguide/">AppConfig User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/">AppConfig API
 * 
 *  Reference</a>> </li> <li>
 * 
 *  For information about Incident Manager, a capability of Systems Manager, see the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/userguide/">Incident Manager User Guide</a> and the <a
 *  href="https://docs.aws.amazon.com/incident-manager/latest/APIReference/">Incident Manager API
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
 * Parses a successful Ssm DeleteMaintenanceWindow \a response.
 */
void DeleteMaintenanceWindowResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMaintenanceWindowResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ssm::DeleteMaintenanceWindowResponsePrivate
 * \brief The DeleteMaintenanceWindowResponsePrivate class provides private implementation for DeleteMaintenanceWindowResponse.
 * \internal
 *
 * \inmodule QtAwsSsm
 */

/*!
 * Constructs a DeleteMaintenanceWindowResponsePrivate object with public implementation \a q.
 */
DeleteMaintenanceWindowResponsePrivate::DeleteMaintenanceWindowResponsePrivate(
    DeleteMaintenanceWindowResponse * const q) : SsmResponsePrivate(q)
{

}

/*!
 * Parses a Ssm DeleteMaintenanceWindow response element from \a xml.
 */
void DeleteMaintenanceWindowResponsePrivate::parseDeleteMaintenanceWindowResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMaintenanceWindowResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ssm
} // namespace QtAws
