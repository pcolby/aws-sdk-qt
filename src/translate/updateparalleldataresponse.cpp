// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparalleldataresponse.h"
#include "updateparalleldataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::UpdateParallelDataResponse
 * \brief The UpdateParallelDataResponse class provides an interace for Translate UpdateParallelData responses.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::updateParallelData
 */

/*!
 * Constructs a UpdateParallelDataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateParallelDataResponse::UpdateParallelDataResponse(
        const UpdateParallelDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TranslateResponse(new UpdateParallelDataResponsePrivate(this), parent)
{
    setRequest(new UpdateParallelDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateParallelDataRequest * UpdateParallelDataResponse::request() const
{
    Q_D(const UpdateParallelDataResponse);
    return static_cast<const UpdateParallelDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Translate UpdateParallelData \a response.
 */
void UpdateParallelDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateParallelDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Translate::UpdateParallelDataResponsePrivate
 * \brief The UpdateParallelDataResponsePrivate class provides private implementation for UpdateParallelDataResponse.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a UpdateParallelDataResponsePrivate object with public implementation \a q.
 */
UpdateParallelDataResponsePrivate::UpdateParallelDataResponsePrivate(
    UpdateParallelDataResponse * const q) : TranslateResponsePrivate(q)
{

}

/*!
 * Parses a Translate UpdateParallelData response element from \a xml.
 */
void UpdateParallelDataResponsePrivate::parseUpdateParallelDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParallelDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Translate
} // namespace QtAws
