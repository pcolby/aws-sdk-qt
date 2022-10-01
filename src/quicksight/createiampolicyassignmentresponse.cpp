// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createiampolicyassignmentresponse.h"
#include "createiampolicyassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentResponse
 * \brief The CreateIAMPolicyAssignmentResponse class provides an interace for QuickSight CreateIAMPolicyAssignment responses.
 *
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless business intelligence service for the Amazon Web Services Cloud that
 *  makes it easy to extend data and insights to every user in your organization. This API reference contains documentation
 *  for a programming interface that you can use to manage Amazon QuickSight.
 *
 * \sa QuickSightClient::createIAMPolicyAssignment
 */

/*!
 * Constructs a CreateIAMPolicyAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIAMPolicyAssignmentResponse::CreateIAMPolicyAssignmentResponse(
        const CreateIAMPolicyAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : QuickSightResponse(new CreateIAMPolicyAssignmentResponsePrivate(this), parent)
{
    setRequest(new CreateIAMPolicyAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIAMPolicyAssignmentRequest * CreateIAMPolicyAssignmentResponse::request() const
{
    Q_D(const CreateIAMPolicyAssignmentResponse);
    return static_cast<const CreateIAMPolicyAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful QuickSight CreateIAMPolicyAssignment \a response.
 */
void CreateIAMPolicyAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIAMPolicyAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::QuickSight::CreateIAMPolicyAssignmentResponsePrivate
 * \brief The CreateIAMPolicyAssignmentResponsePrivate class provides private implementation for CreateIAMPolicyAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a CreateIAMPolicyAssignmentResponsePrivate object with public implementation \a q.
 */
CreateIAMPolicyAssignmentResponsePrivate::CreateIAMPolicyAssignmentResponsePrivate(
    CreateIAMPolicyAssignmentResponse * const q) : QuickSightResponsePrivate(q)
{

}

/*!
 * Parses a QuickSight CreateIAMPolicyAssignment response element from \a xml.
 */
void CreateIAMPolicyAssignmentResponsePrivate::parseCreateIAMPolicyAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIAMPolicyAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace QuickSight
} // namespace QtAws
