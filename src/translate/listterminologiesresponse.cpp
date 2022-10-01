// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listterminologiesresponse.h"
#include "listterminologiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListTerminologiesResponse
 * \brief The ListTerminologiesResponse class provides an interace for Translate ListTerminologies responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listTerminologies
 */

/*!
 * Constructs a ListTerminologiesResponse object for \a reply to \a request, with parent \a parent.
 */
ListTerminologiesResponse::ListTerminologiesResponse(
        const ListTerminologiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListTerminologiesResponsePrivate(this), parent)
{
    setRequest(new ListTerminologiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListTerminologiesRequest * ListTerminologiesResponse::request() const
{
    Q_D(const ListTerminologiesResponse);
    return static_cast<const ListTerminologiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ListTerminologies \a response.
 */
void ListTerminologiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListTerminologiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListTerminologiesResponsePrivate
 * \brief The ListTerminologiesResponsePrivate class provides private implementation for ListTerminologiesResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListTerminologiesResponsePrivate object with public implementation \a q.
 */
ListTerminologiesResponsePrivate::ListTerminologiesResponsePrivate(
    ListTerminologiesResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListTerminologies response element from \a xml.
 */
void ListTerminologiesResponsePrivate::parseListTerminologiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTerminologiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
