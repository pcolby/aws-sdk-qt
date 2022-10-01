// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqualificationtypesresponse.h"
#include "listqualificationtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::ListQualificationTypesResponse
 * \brief The ListQualificationTypesResponse class provides an interace for MTurk ListQualificationTypes responses.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::listQualificationTypes
 */

/*!
 * Constructs a ListQualificationTypesResponse object for \a reply to \a request, with parent \a parent.
 */
ListQualificationTypesResponse::ListQualificationTypesResponse(
        const ListQualificationTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MTurkResponse(new ListQualificationTypesResponsePrivate(this), parent)
{
    setRequest(new ListQualificationTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQualificationTypesRequest * ListQualificationTypesResponse::request() const
{
    Q_D(const ListQualificationTypesResponse);
    return static_cast<const ListQualificationTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MTurk ListQualificationTypes \a response.
 */
void ListQualificationTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQualificationTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MTurk::ListQualificationTypesResponsePrivate
 * \brief The ListQualificationTypesResponsePrivate class provides private implementation for ListQualificationTypesResponse.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a ListQualificationTypesResponsePrivate object with public implementation \a q.
 */
ListQualificationTypesResponsePrivate::ListQualificationTypesResponsePrivate(
    ListQualificationTypesResponse * const q) : MTurkResponsePrivate(q)
{

}

/*!
 * Parses a MTurk ListQualificationTypes response element from \a xml.
 */
void ListQualificationTypesResponsePrivate::parseListQualificationTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQualificationTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MTurk
} // namespace QtAws
