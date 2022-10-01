// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectassignmentresponse.h"
#include "rejectassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::RejectAssignmentResponse
 * \brief The RejectAssignmentResponse class provides an interace for MTurk RejectAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::rejectAssignment
 */

/*!
 * Constructs a RejectAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
RejectAssignmentResponse::RejectAssignmentResponse(
        const RejectAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new RejectAssignmentResponsePrivate(this), parent)
{
    setRequest(new RejectAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RejectAssignmentRequest * RejectAssignmentResponse::request() const
{
    Q_D(const RejectAssignmentResponse);
    return static_cast<const RejectAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk RejectAssignment \a response.
 */
void RejectAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RejectAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::RejectAssignmentResponsePrivate
 * \brief The RejectAssignmentResponsePrivate class provides private implementation for RejectAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a RejectAssignmentResponsePrivate object with public implementation \a q.
 */
RejectAssignmentResponsePrivate::RejectAssignmentResponsePrivate(
    RejectAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk RejectAssignment response element from \a xml.
 */
void RejectAssignmentResponsePrivate::parseRejectAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RejectAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
