// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getassignmentresponse.h"
#include "getassignmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetAssignmentResponse
 * \brief The GetAssignmentResponse class provides an interace for MTurk GetAssignment responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getAssignment
 */

/*!
 * Constructs a GetAssignmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetAssignmentResponse::GetAssignmentResponse(
        const GetAssignmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new GetAssignmentResponsePrivate(this), parent)
{
    setRequest(new GetAssignmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAssignmentRequest * GetAssignmentResponse::request() const
{
    Q_D(const GetAssignmentResponse);
    return static_cast<const GetAssignmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk GetAssignment \a response.
 */
void GetAssignmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAssignmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::GetAssignmentResponsePrivate
 * \brief The GetAssignmentResponsePrivate class provides private implementation for GetAssignmentResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetAssignmentResponsePrivate object with public implementation \a q.
 */
GetAssignmentResponsePrivate::GetAssignmentResponsePrivate(
    GetAssignmentResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk GetAssignment response element from \a xml.
 */
void GetAssignmentResponsePrivate::parseGetAssignmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAssignmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
