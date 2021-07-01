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

#include "getevidencefoldersbyassessmentresponse.h"
#include "getevidencefoldersbyassessmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AuditManager {

/*!
 * \class QtAws::AuditManager::GetEvidenceFoldersByAssessmentResponse
 * \brief The GetEvidenceFoldersByAssessmentResponse class provides an interace for AuditManager GetEvidenceFoldersByAssessment responses.
 *
 * \inmodule QtAwsAuditManager
 *
 *  Welcome to the AWS Audit Manager API reference. This guide is for developers who need detailed information about the AWS
 *  Audit Manager API operations, data types, and errors.
 * 
 *  </p
 * 
 *  AWS Audit Manager is a service that provides automated evidence collection so that you can continuously audit your AWS
 *  usage, and assess the effectiveness of your controls to better manage risk and simplify
 * 
 *  compliance>
 * 
 *  AWS Audit Manager provides pre-built frameworks that structure and automate assessments for a given compliance standard.
 *  Frameworks include a pre-built collection of controls with descriptions and testing procedures, which are grouped
 *  according to the requirements of the specified compliance standard or regulation. You can also customize frameworks and
 *  controls to support internal audits with unique requirements.
 * 
 *  </p
 * 
 *  Use the following links to get started with the AWS Audit Manager
 * 
 *  API> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Operations.html">Actions</a>: An alphabetical
 *  list of all AWS Audit Manager API
 * 
 *  operations> </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/audit-manager/latest/APIReference/API_Types.html">Data types</a>: An alphabetical
 *  list of all AWS Audit Manager data
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
 *  If you're new to AWS Audit Manager, we recommend that you review the <a
 *  href="https://docs.aws.amazon.com/audit-manager/latest/userguide/what-is.html"> AWS Audit Manager User
 *
 * \sa AuditManagerClient::getEvidenceFoldersByAssessment
 */

/*!
 * Constructs a GetEvidenceFoldersByAssessmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetEvidenceFoldersByAssessmentResponse::GetEvidenceFoldersByAssessmentResponse(
        const GetEvidenceFoldersByAssessmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AuditManagerResponse(new GetEvidenceFoldersByAssessmentResponsePrivate(this), parent)
{
    setRequest(new GetEvidenceFoldersByAssessmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEvidenceFoldersByAssessmentRequest * GetEvidenceFoldersByAssessmentResponse::request() const
{
    Q_D(const GetEvidenceFoldersByAssessmentResponse);
    return static_cast<const GetEvidenceFoldersByAssessmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AuditManager GetEvidenceFoldersByAssessment \a response.
 */
void GetEvidenceFoldersByAssessmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEvidenceFoldersByAssessmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AuditManager::GetEvidenceFoldersByAssessmentResponsePrivate
 * \brief The GetEvidenceFoldersByAssessmentResponsePrivate class provides private implementation for GetEvidenceFoldersByAssessmentResponse.
 * \internal
 *
 * \inmodule QtAwsAuditManager
 */

/*!
 * Constructs a GetEvidenceFoldersByAssessmentResponsePrivate object with public implementation \a q.
 */
GetEvidenceFoldersByAssessmentResponsePrivate::GetEvidenceFoldersByAssessmentResponsePrivate(
    GetEvidenceFoldersByAssessmentResponse * const q) : AuditManagerResponsePrivate(q)
{

}

/*!
 * Parses a AuditManager GetEvidenceFoldersByAssessment response element from \a xml.
 */
void GetEvidenceFoldersByAssessmentResponsePrivate::parseGetEvidenceFoldersByAssessmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEvidenceFoldersByAssessmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AuditManager
} // namespace QtAws
