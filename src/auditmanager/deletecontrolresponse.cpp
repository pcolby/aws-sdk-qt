// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecontrolresponse.h"
#include "deletecontrolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::DeleteControlResponse
 * \brief The DeleteControlResponse class provides an interace for AuditManager DeleteControl responses.
 *
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the Audit Manager API reference. This guide is for developers who need detailed information about the Audit
 *  Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  Audit Manager is a service that provides automated evidence collection so that you can continually audit your Amazon Web
 *  Services usage. You can use it to assess the effectiveness of your controls, manage risk, and simplify
 * 
 *  compliance>
 * 
 *  Audit Manager provides prebuilt frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a prebuilt collection of controls with descriptions and testing procedures. These controls are
 *  grouped according to the requirements of the specified compliance standard or regulation. You can also customize
 *  frameworks and controls to support internal audits with specific requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all Audit Manager data
 * 
 *  types> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonParameters.html">Common parameters</a>:
 *  Parameters that all Query operations can
 * 
 *  use> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/CommonErrors.html">Common errors</a>: Client and
 *  server errors that all operations can
 * 
 *  return> </li> </ul>
 * 
 *  If you're new to Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> Audit Manager User
 *
 * \sa AuditManagerClient::deleteControl
 */

/*!
 * Constructs a DeleteControlResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteControlResponse::DeleteControlResponse(
        const DeleteControlRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new DeleteControlResponsePrivate(this), parent)
{
    setRequest(new DeleteControlRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteControlRequest * DeleteControlResponse::request() const
{
    Q_D(const DeleteControlResponse);
    return static_cast<const DeleteControlRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager DeleteControl \a response.
 */
void DeleteControlResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteControlResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::DeleteControlResponsePrivate
 * \brief The DeleteControlResponsePrivate class provides private implementation for DeleteControlResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a DeleteControlResponsePrivate object with public implementation \a q.
 */
DeleteControlResponsePrivate::DeleteControlResponsePrivate(
    DeleteControlResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager DeleteControl response element from \a xml.
 */
void DeleteControlResponsePrivate::parseDeleteControlResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteControlResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
