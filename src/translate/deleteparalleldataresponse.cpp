// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparalleldataresponse.h"
#include "deleteparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteParallelDataResponse
 * \brief The DeleteParallelDataResponse class provides an interace for Translate DeleteParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteParallelData
 */

/*!
 * Constructs a DeleteParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteParallelDataResponse::DeleteParallelDataResponse(
        const DeleteParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new DeleteParallelDataResponsePrivate(this), parent)
{
    setRequest(new DeleteParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteParallelDataRequest * DeleteParallelDataResponse::request() const
{
    Q_D(const DeleteParallelDataResponse);
    return static_cast<const DeleteParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate DeleteParallelData \a response.
 */
void DeleteParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::DeleteParallelDataResponsePrivate
 * \brief The DeleteParallelDataResponsePrivate class provides private implementation for DeleteParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteParallelDataResponsePrivate object with public implementation \a q.
 */
DeleteParallelDataResponsePrivate::DeleteParallelDataResponsePrivate(
    DeleteParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate DeleteParallelData response element from \a xml.
 */
void DeleteParallelDataResponsePrivate::parseDeleteParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
