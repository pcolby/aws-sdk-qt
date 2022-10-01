// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentversionresponse.h"
#include "getsegmentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionResponse
 * \brief The GetSegmentVersionResponse class provides an interace for Pinpoint GetSegmentVersion responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getSegmentVersion
 */

/*!
 * Constructs a GetSegmentVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentVersionResponse::GetSegmentVersionResponse(
        const GetSegmentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetSegmentVersionResponsePrivate(this), parent)
{
    setRequest(new GetSegmentVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentVersionRequest * GetSegmentVersionResponse::request() const
{
    Q_D(const GetSegmentVersionResponse);
    return static_cast<const GetSegmentVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint GetSegmentVersion \a response.
 */
void GetSegmentVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::GetSegmentVersionResponsePrivate
 * \brief The GetSegmentVersionResponsePrivate class provides private implementation for GetSegmentVersionResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetSegmentVersionResponsePrivate object with public implementation \a q.
 */
GetSegmentVersionResponsePrivate::GetSegmentVersionResponsePrivate(
    GetSegmentVersionResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint GetSegmentVersion response element from \a xml.
 */
void GetSegmentVersionResponsePrivate::parseGetSegmentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
