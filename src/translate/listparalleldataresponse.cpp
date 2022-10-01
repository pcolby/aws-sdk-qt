// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listparalleldataresponse.h"
#include "listparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListParallelDataResponse
 * \brief The ListParallelDataResponse class provides an interace for Translate ListParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listParallelData
 */

/*!
 * Constructs a ListParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
ListParallelDataResponse::ListParallelDataResponse(
        const ListParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new ListParallelDataResponsePrivate(this), parent)
{
    setRequest(new ListParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListParallelDataRequest * ListParallelDataResponse::request() const
{
    Q_D(const ListParallelDataResponse);
    return static_cast<const ListParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate ListParallelData \a response.
 */
void ListParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::ListParallelDataResponsePrivate
 * \brief The ListParallelDataResponsePrivate class provides private implementation for ListParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListParallelDataResponsePrivate object with public implementation \a q.
 */
ListParallelDataResponsePrivate::ListParallelDataResponsePrivate(
    ListParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate ListParallelData response element from \a xml.
 */
void ListParallelDataResponsePrivate::parseListParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
