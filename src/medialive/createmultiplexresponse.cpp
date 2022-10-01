// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmultiplexresponse.h"
#include "createmultiplexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::CreateMultiplexResponse
 * \brief The CreateMultiplexResponse class provides an interace for MediaLive CreateMultiplex responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::createMultiplex
 */

/*!
 * Constructs a CreateMultiplexResponse object for \a reply to \a request, with parent \a parent.
 */
CreateMultiplexResponse::CreateMultiplexResponse(
        const CreateMultiplexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new CreateMultiplexResponsePrivate(this), parent)
{
    setRequest(new CreateMultiplexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateMultiplexRequest * CreateMultiplexResponse::request() const
{
    Q_D(const CreateMultiplexResponse);
    return static_cast<const CreateMultiplexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive CreateMultiplex \a response.
 */
void CreateMultiplexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateMultiplexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::CreateMultiplexResponsePrivate
 * \brief The CreateMultiplexResponsePrivate class provides private implementation for CreateMultiplexResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a CreateMultiplexResponsePrivate object with public implementation \a q.
 */
CreateMultiplexResponsePrivate::CreateMultiplexResponsePrivate(
    CreateMultiplexResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive CreateMultiplex response element from \a xml.
 */
void CreateMultiplexResponsePrivate::parseCreateMultiplexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMultiplexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
