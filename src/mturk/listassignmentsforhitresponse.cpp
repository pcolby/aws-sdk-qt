// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listassignmentsforhitresponse.h"
#include "listassignmentsforhitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITResponse
 * \brief The ListAssignmentsForHITResponse class provides an interace for MTurk ListAssignmentsForHIT responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listAssignmentsForHIT
 */

/*!
 * Constructs a ListAssignmentsForHITResponse object for \a reply to \a request, with parent \a parent.
 */
ListAssignmentsForHITResponse::ListAssignmentsForHITResponse(
        const ListAssignmentsForHITRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListAssignmentsForHITResponsePrivate(this), parent)
{
    setRequest(new ListAssignmentsForHITRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAssignmentsForHITRequest * ListAssignmentsForHITResponse::request() const
{
    Q_D(const ListAssignmentsForHITResponse);
    return static_cast<const ListAssignmentsForHITRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListAssignmentsForHIT \a response.
 */
void ListAssignmentsForHITResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAssignmentsForHITResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListAssignmentsForHITResponsePrivate
 * \brief The ListAssignmentsForHITResponsePrivate class provides private implementation for ListAssignmentsForHITResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListAssignmentsForHITResponsePrivate object with public implementation \a q.
 */
ListAssignmentsForHITResponsePrivate::ListAssignmentsForHITResponsePrivate(
    ListAssignmentsForHITResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListAssignmentsForHIT response element from \a xml.
 */
void ListAssignmentsForHITResponsePrivate::parseListAssignmentsForHITResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssignmentsForHITResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
