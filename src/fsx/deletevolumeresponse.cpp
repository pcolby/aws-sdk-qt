// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevolumeresponse.h"
#include "deletevolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DeleteVolumeResponse
 * \brief The DeleteVolumeResponse class provides an interace for FSx DeleteVolume responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::deleteVolume
 */

/*!
 * Constructs a DeleteVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteVolumeResponse::DeleteVolumeResponse(
        const DeleteVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DeleteVolumeResponsePrivate(this), parent)
{
    setRequest(new DeleteVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteVolumeRequest * DeleteVolumeResponse::request() const
{
    Q_D(const DeleteVolumeResponse);
    return static_cast<const DeleteVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DeleteVolume \a response.
 */
void DeleteVolumeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DeleteVolumeResponsePrivate
 * \brief The DeleteVolumeResponsePrivate class provides private implementation for DeleteVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DeleteVolumeResponsePrivate object with public implementation \a q.
 */
DeleteVolumeResponsePrivate::DeleteVolumeResponsePrivate(
    DeleteVolumeResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DeleteVolume response element from \a xml.
 */
void DeleteVolumeResponsePrivate::parseDeleteVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVolumeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
