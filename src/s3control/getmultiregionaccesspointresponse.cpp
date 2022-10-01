// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmultiregionaccesspointresponse.h"
#include "getmultiregionaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointResponse
 * \brief The GetMultiRegionAccessPointResponse class provides an interace for S3Control GetMultiRegionAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPoint
 */

/*!
 * Constructs a GetMultiRegionAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
GetMultiRegionAccessPointResponse::GetMultiRegionAccessPointResponse(
        const GetMultiRegionAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new GetMultiRegionAccessPointResponsePrivate(this), parent)
{
    setRequest(new GetMultiRegionAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMultiRegionAccessPointRequest * GetMultiRegionAccessPointResponse::request() const
{
    Q_D(const GetMultiRegionAccessPointResponse);
    return static_cast<const GetMultiRegionAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control GetMultiRegionAccessPoint \a response.
 */
void GetMultiRegionAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMultiRegionAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointResponsePrivate
 * \brief The GetMultiRegionAccessPointResponsePrivate class provides private implementation for GetMultiRegionAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointResponsePrivate object with public implementation \a q.
 */
GetMultiRegionAccessPointResponsePrivate::GetMultiRegionAccessPointResponsePrivate(
    GetMultiRegionAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control GetMultiRegionAccessPoint response element from \a xml.
 */
void GetMultiRegionAccessPointResponsePrivate::parseGetMultiRegionAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMultiRegionAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
