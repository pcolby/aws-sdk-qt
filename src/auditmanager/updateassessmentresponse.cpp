// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateassessmentresponse.h"
#include "updateassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::UpdateAssessmentResponse
 * \brief The UpdateAssessmentResponse class provides an interace for AuditManager UpdateAssessment responses.
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
 * \sa AuditManagerClient::updateAssessment
 */

/*!
 * Constructs a UpdateAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAssessmentResponse::UpdateAssessmentResponse(
        const UpdateAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new UpdateAssessmentResponsePrivate(this), parent)
{
    setRequest(new UpdateAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAssessmentRequest * UpdateAssessmentResponse::request() const
{
    Q_D(const UpdateAssessmentResponse);
    return static_cast<const UpdateAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager UpdateAssessment \a response.
 */
void UpdateAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::UpdateAssessmentResponsePrivate
 * \brief The UpdateAssessmentResponsePrivate class provides private implementation for UpdateAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a UpdateAssessmentResponsePrivate object with public implementation \a q.
 */
UpdateAssessmentResponsePrivate::UpdateAssessmentResponsePrivate(
    UpdateAssessmentResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager UpdateAssessment response element from \a xml.
 */
void UpdateAssessmentResponsePrivate::parseUpdateAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
