// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsnapshotresponse.h"
#include "createsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::CreateSnapshotResponse
 * \brief The CreateSnapshotResponse class provides an interace for GameSparks CreateSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::createSnapshot
 */

/*!
 * Constructs a CreateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSnapshotResponse::CreateSnapshotResponse(
        const CreateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new CreateSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSnapshotRequest * CreateSnapshotResponse::request() const
{
    Q_D(const CreateSnapshotResponse);
    return static_cast<const CreateSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks CreateSnapshot \a response.
 */
void CreateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::CreateSnapshotResponsePrivate
 * \brief The CreateSnapshotResponsePrivate class provides private implementation for CreateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a CreateSnapshotResponsePrivate object with public implementation \a q.
 */
CreateSnapshotResponsePrivate::CreateSnapshotResponsePrivate(
    CreateSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks CreateSnapshot response element from \a xml.
 */
void CreateSnapshotResponsePrivate::parseCreateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
