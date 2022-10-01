// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describevolumesresponse.h"
#include "describevolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeVolumesResponse
 * \brief The DescribeVolumesResponse class provides an interace for FSx DescribeVolumes responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeVolumes
 */

/*!
 * Constructs a DescribeVolumesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVolumesResponse::DescribeVolumesResponse(
        const DescribeVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeVolumesResponsePrivate(this), parent)
{
    setRequest(new DescribeVolumesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVolumesRequest * DescribeVolumesResponse::request() const
{
    Q_D(const DescribeVolumesResponse);
    return static_cast<const DescribeVolumesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeVolumes \a response.
 */
void DescribeVolumesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVolumesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeVolumesResponsePrivate
 * \brief The DescribeVolumesResponsePrivate class provides private implementation for DescribeVolumesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeVolumesResponsePrivate object with public implementation \a q.
 */
DescribeVolumesResponsePrivate::DescribeVolumesResponsePrivate(
    DescribeVolumesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeVolumes response element from \a xml.
 */
void DescribeVolumesResponsePrivate::parseDescribeVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVolumesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
