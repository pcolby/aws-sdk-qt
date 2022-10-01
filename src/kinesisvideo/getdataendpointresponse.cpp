// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdataendpointresponse.h"
#include "getdataendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KinesisVideo {

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointResponse
 * \brief The GetDataEndpointResponse class provides an interace for KinesisVideo GetDataEndpoint responses.
 *
 * \inmodule QtAwsKinesisVideo
 *
 *
 * \sa KinesisVideoClient::getDataEndpoint
 */

/*!
 * Constructs a GetDataEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataEndpointResponse::GetDataEndpointResponse(
        const GetDataEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisVideoResponse(new GetDataEndpointResponsePrivate(this), parent)
{
    setRequest(new GetDataEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataEndpointRequest * GetDataEndpointResponse::request() const
{
    Q_D(const GetDataEndpointResponse);
    return static_cast<const GetDataEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KinesisVideo GetDataEndpoint \a response.
 */
void GetDataEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KinesisVideo::GetDataEndpointResponsePrivate
 * \brief The GetDataEndpointResponsePrivate class provides private implementation for GetDataEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsKinesisVideo
 */

/*!
 * Constructs a GetDataEndpointResponsePrivate object with public implementation \a q.
 */
GetDataEndpointResponsePrivate::GetDataEndpointResponsePrivate(
    GetDataEndpointResponse * const q) : KinesisVideoResponsePrivate(q)
{

}

/*!
 * Parses a KinesisVideo GetDataEndpoint response element from \a xml.
 */
void GetDataEndpointResponsePrivate::parseGetDataEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KinesisVideo
} // namespace QtAws
