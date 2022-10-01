// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiplexresponse.h"
#include "deletemultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteMultiplexResponse
 * \brief The DeleteMultiplexResponse class provides an interace for MediaLive DeleteMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteMultiplex
 */

/*!
 * Constructs a DeleteMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiplexResponse::DeleteMultiplexResponse(
        const DeleteMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteMultiplexResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiplexRequest * DeleteMultiplexResponse::request() const
{
    Q_D(const DeleteMultiplexResponse);
    return static_cast<const DeleteMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteMultiplex \a response.
 */
void DeleteMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteMultiplexResponsePrivate
 * \brief The DeleteMultiplexResponsePrivate class provides private implementation for DeleteMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteMultiplexResponsePrivate object with public implementation \a q.
 */
DeleteMultiplexResponsePrivate::DeleteMultiplexResponsePrivate(
    DeleteMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteMultiplex response element from \a xml.
 */
void DeleteMultiplexResponsePrivate::parseDeleteMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
