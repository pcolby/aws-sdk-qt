// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassessmentframeworkresponse.h"
#include "getassessmentframeworkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::GetAssessmentFrameworkResponse
 * \brief The GetAssessmentFrameworkResponse class provides an interace for AuditManager GetAssessmentFramework responses.
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
 * \sa AuditManagerClient::getAssessmentFramework
 */

/*!
 * Constructs a GetAssessmentFrameworkResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssessmentFrameworkResponse::GetAssessmentFrameworkResponse(
        const GetAssessmentFrameworkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new GetAssessmentFrameworkResponsePrivate(this), parent)
{
    setRequest(new GetAssessmentFrameworkRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssessmentFrameworkRequest * GetAssessmentFrameworkResponse::request() const
{
    Q_D(const GetAssessmentFrameworkResponse);
    return static_cast<const GetAssessmentFrameworkRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager GetAssessmentFramework \a response.
 */
void GetAssessmentFrameworkResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssessmentFrameworkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::GetAssessmentFrameworkResponsePrivate
 * \brief The GetAssessmentFrameworkResponsePrivate class provides private implementation for GetAssessmentFrameworkResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a GetAssessmentFrameworkResponsePrivate object with public implementation \a q.
 */
GetAssessmentFrameworkResponsePrivate::GetAssessmentFrameworkResponsePrivate(
    GetAssessmentFrameworkResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager GetAssessmentFramework response element from \a xml.
 */
void GetAssessmentFrameworkResponsePrivate::parseGetAssessmentFrameworkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssessmentFrameworkResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
