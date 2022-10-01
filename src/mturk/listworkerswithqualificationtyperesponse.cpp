// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworkerswithqualificationtyperesponse.h"
#include "listworkerswithqualificationtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeResponse
 * \brief The ListWorkersWithQualificationTypeResponse class provides an interace for MTurk ListWorkersWithQualificationType responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listWorkersWithQualificationType
 */

/*!
 * Constructs a ListWorkersWithQualificationTypeResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorkersWithQualificationTypeResponse::ListWorkersWithQualificationTypeResponse(
        const ListWorkersWithQualificationTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListWorkersWithQualificationTypeResponsePrivate(this), parent)
{
    setRequest(new ListWorkersWithQualificationTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorkersWithQualificationTypeRequest * ListWorkersWithQualificationTypeResponse::request() const
{
    Q_D(const ListWorkersWithQualificationTypeResponse);
    return static_cast<const ListWorkersWithQualificationTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListWorkersWithQualificationType \a response.
 */
void ListWorkersWithQualificationTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorkersWithQualificationTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListWorkersWithQualificationTypeResponsePrivate
 * \brief The ListWorkersWithQualificationTypeResponsePrivate class provides private implementation for ListWorkersWithQualificationTypeResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListWorkersWithQualificationTypeResponsePrivate object with public implementation \a q.
 */
ListWorkersWithQualificationTypeResponsePrivate::ListWorkersWithQualificationTypeResponsePrivate(
    ListWorkersWithQualificationTypeResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListWorkersWithQualificationType response element from \a xml.
 */
void ListWorkersWithQualificationTypeResponsePrivate::parseListWorkersWithQualificationTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorkersWithQualificationTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
