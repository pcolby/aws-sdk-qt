// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getparalleldataresponse.h"
#include "getparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetParallelDataResponse
 * \brief The GetParallelDataResponse class provides an interace for Translate GetParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getParallelData
 */

/*!
 * Constructs a GetParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetParallelDataResponse::GetParallelDataResponse(
        const GetParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new GetParallelDataResponsePrivate(this), parent)
{
    setRequest(new GetParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetParallelDataRequest * GetParallelDataResponse::request() const
{
    Q_D(const GetParallelDataResponse);
    return static_cast<const GetParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate GetParallelData \a response.
 */
void GetParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::GetParallelDataResponsePrivate
 * \brief The GetParallelDataResponsePrivate class provides private implementation for GetParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetParallelDataResponsePrivate object with public implementation \a q.
 */
GetParallelDataResponsePrivate::GetParallelDataResponsePrivate(
    GetParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate GetParallelData response element from \a xml.
 */
void GetParallelDataResponsePrivate::parseGetParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
