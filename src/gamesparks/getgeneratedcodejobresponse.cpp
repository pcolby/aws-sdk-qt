// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgeneratedcodejobresponse.h"
#include "getgeneratedcodejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobResponse
 * \brief The GetGeneratedCodeJobResponse class provides an interace for GameSparks GetGeneratedCodeJob responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getGeneratedCodeJob
 */

/*!
 * Constructs a GetGeneratedCodeJobResponse object for \a reply to \a request, with parent \a parent.
 */
GetGeneratedCodeJobResponse::GetGeneratedCodeJobResponse(
        const GetGeneratedCodeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetGeneratedCodeJobResponsePrivate(this), parent)
{
    setRequest(new GetGeneratedCodeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGeneratedCodeJobRequest * GetGeneratedCodeJobResponse::request() const
{
    Q_D(const GetGeneratedCodeJobResponse);
    return static_cast<const GetGeneratedCodeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetGeneratedCodeJob \a response.
 */
void GetGeneratedCodeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGeneratedCodeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetGeneratedCodeJobResponsePrivate
 * \brief The GetGeneratedCodeJobResponsePrivate class provides private implementation for GetGeneratedCodeJobResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetGeneratedCodeJobResponsePrivate object with public implementation \a q.
 */
GetGeneratedCodeJobResponsePrivate::GetGeneratedCodeJobResponsePrivate(
    GetGeneratedCodeJobResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetGeneratedCodeJob response element from \a xml.
 */
void GetGeneratedCodeJobResponsePrivate::parseGetGeneratedCodeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeneratedCodeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
