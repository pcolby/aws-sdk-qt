// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevolumeresponse.h"
#include "updatevolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateVolumeResponse
 * \brief The UpdateVolumeResponse class provides an interace for FSx UpdateVolume responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateVolume
 */

/*!
 * Constructs a UpdateVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateVolumeResponse::UpdateVolumeResponse(
        const UpdateVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateVolumeResponsePrivate(this), parent)
{
    setRequest(new UpdateVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateVolumeRequest * UpdateVolumeResponse::request() const
{
    Q_D(const UpdateVolumeResponse);
    return static_cast<const UpdateVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx UpdateVolume \a response.
 */
void UpdateVolumeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateVolumeResponsePrivate
 * \brief The UpdateVolumeResponsePrivate class provides private implementation for UpdateVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateVolumeResponsePrivate object with public implementation \a q.
 */
UpdateVolumeResponsePrivate::UpdateVolumeResponsePrivate(
    UpdateVolumeResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateVolume response element from \a xml.
 */
void UpdateVolumeResponsePrivate::parseUpdateVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateVolumeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
