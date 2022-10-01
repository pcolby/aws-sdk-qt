// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststagesresponse.h"
#include "liststagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListStagesResponse
 * \brief The ListStagesResponse class provides an interace for GameSparks ListStages responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listStages
 */

/*!
 * Constructs a ListStagesResponse object for \a reply to \a request, with parent \a parent.
 */
ListStagesResponse::ListStagesResponse(
        const ListStagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListStagesResponsePrivate(this), parent)
{
    setRequest(new ListStagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStagesRequest * ListStagesResponse::request() const
{
    Q_D(const ListStagesResponse);
    return static_cast<const ListStagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListStages \a response.
 */
void ListStagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListStagesResponsePrivate
 * \brief The ListStagesResponsePrivate class provides private implementation for ListStagesResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListStagesResponsePrivate object with public implementation \a q.
 */
ListStagesResponsePrivate::ListStagesResponsePrivate(
    ListStagesResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListStages response element from \a xml.
 */
void ListStagesResponsePrivate::parseListStagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
