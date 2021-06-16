/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
