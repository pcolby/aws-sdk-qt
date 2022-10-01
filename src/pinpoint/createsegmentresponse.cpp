// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsegmentresponse.h"
#include "createsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateSegmentResponse
 * \brief The CreateSegmentResponse class provides an interace for Pinpoint CreateSegment responses.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::createSegment
 */

/*!
 * Constructs a CreateSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSegmentResponse::CreateSegmentResponse(
        const CreateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateSegmentResponsePrivate(this), parent)
{
    setRequest(new CreateSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSegmentRequest * CreateSegmentResponse::request() const
{
    Q_D(const CreateSegmentResponse);
    return static_cast<const CreateSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pinpoint CreateSegment \a response.
 */
void CreateSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pinpoint::CreateSegmentResponsePrivate
 * \brief The CreateSegmentResponsePrivate class provides private implementation for CreateSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a CreateSegmentResponsePrivate object with public implementation \a q.
 */
CreateSegmentResponsePrivate::CreateSegmentResponsePrivate(
    CreateSegmentResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * Parses a Pinpoint CreateSegment response element from \a xml.
 */
void CreateSegmentResponsePrivate::parseCreateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pinpoint
} // namespace QtAws
