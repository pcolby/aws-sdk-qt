// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiregionaccesspointresponse.h"
#include "deletemultiregionaccesspointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointResponse
 * \brief The DeleteMultiRegionAccessPointResponse class provides an interace for S3Control DeleteMultiRegionAccessPoint responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteMultiRegionAccessPoint
 */

/*!
 * Constructs a DeleteMultiRegionAccessPointResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteMultiRegionAccessPointResponse::DeleteMultiRegionAccessPointResponse(
        const DeleteMultiRegionAccessPointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteMultiRegionAccessPointResponsePrivate(this), parent)
{
    setRequest(new DeleteMultiRegionAccessPointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteMultiRegionAccessPointRequest * DeleteMultiRegionAccessPointResponse::request() const
{
    Q_D(const DeleteMultiRegionAccessPointResponse);
    return static_cast<const DeleteMultiRegionAccessPointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteMultiRegionAccessPoint \a response.
 */
void DeleteMultiRegionAccessPointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteMultiRegionAccessPointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointResponsePrivate
 * \brief The DeleteMultiRegionAccessPointResponsePrivate class provides private implementation for DeleteMultiRegionAccessPointResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteMultiRegionAccessPointResponsePrivate object with public implementation \a q.
 */
DeleteMultiRegionAccessPointResponsePrivate::DeleteMultiRegionAccessPointResponsePrivate(
    DeleteMultiRegionAccessPointResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteMultiRegionAccessPoint response element from \a xml.
 */
void DeleteMultiRegionAccessPointResponsePrivate::parseDeleteMultiRegionAccessPointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteMultiRegionAccessPointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
