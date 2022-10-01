// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "approveassignmentresponse.h"
#include "approveassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ApproveAssignmentResponse
 * \brief The ApproveAssignmentResponse class provides an interace for MTurk ApproveAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::approveAssignment
 */

/*!
 * Constructs a ApproveAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
ApproveAssignmentResponse::ApproveAssignmentResponse(
        const ApproveAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ApproveAssignmentResponsePrivate(this), parent)
{
    setRequest(new ApproveAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApproveAssignmentRequest * ApproveAssignmentResponse::request() const
{
    Q_D(const ApproveAssignmentResponse);
    return static_cast<const ApproveAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ApproveAssignment \a response.
 */
void ApproveAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApproveAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ApproveAssignmentResponsePrivate
 * \brief The ApproveAssignmentResponsePrivate class provides private implementation for ApproveAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ApproveAssignmentResponsePrivate object with public implementation \a q.
 */
ApproveAssignmentResponsePrivate::ApproveAssignmentResponsePrivate(
    ApproveAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ApproveAssignment response element from \a xml.
 */
void ApproveAssignmentResponsePrivate::parseApproveAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApproveAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
