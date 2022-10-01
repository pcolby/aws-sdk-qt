// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlanguagesresponse.h"
#include "listlanguagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListLanguagesResponse
 * \brief The ListLanguagesResponse class provides an interace for Translate ListLanguages responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listLanguages
 */

/*!
 * Constructs a ListLanguagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListLanguagesResponse::ListLanguagesResponse(
        const ListLanguagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListLanguagesResponsePrivate(this), parent)
{
    setRequest(new ListLanguagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLanguagesRequest * ListLanguagesResponse::request() const
{
    Q_D(const ListLanguagesResponse);
    return static_cast<const ListLanguagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ListLanguages \a response.
 */
void ListLanguagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLanguagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListLanguagesResponsePrivate
 * \brief The ListLanguagesResponsePrivate class provides private implementation for ListLanguagesResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListLanguagesResponsePrivate object with public implementation \a q.
 */
ListLanguagesResponsePrivate::ListLanguagesResponsePrivate(
    ListLanguagesResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListLanguages response element from \a xml.
 */
void ListLanguagesResponsePrivate::parseListLanguagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLanguagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
