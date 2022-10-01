/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putmultiregionaccesspointpolicyresponse.h"
#include "putmultiregionaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutMultiRegionAccessPointPolicyResponse
 * \brief The PutMultiRegionAccessPointPolicyResponse class provides an interace for S3Control PutMultiRegionAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putMultiRegionAccessPointPolicy
 */

/*!
 * Constructs a PutMultiRegionAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutMultiRegionAccessPointPolicyResponse::PutMultiRegionAccessPointPolicyResponse(
        const PutMultiRegionAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutMultiRegionAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new PutMultiRegionAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMultiRegionAccessPointPolicyRequest * PutMultiRegionAccessPointPolicyResponse::request() const
{
    Q_D(const PutMultiRegionAccessPointPolicyResponse);
    return static_cast<const PutMultiRegionAccessPointPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutMultiRegionAccessPointPolicy \a response.
 */
void PutMultiRegionAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMultiRegionAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutMultiRegionAccessPointPolicyResponsePrivate
 * \brief The PutMultiRegionAccessPointPolicyResponsePrivate class provides private implementation for PutMultiRegionAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutMultiRegionAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
PutMultiRegionAccessPointPolicyResponsePrivate::PutMultiRegionAccessPointPolicyResponsePrivate(
    PutMultiRegionAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutMultiRegionAccessPointPolicy response element from \a xml.
 */
void PutMultiRegionAccessPointPolicyResponsePrivate::parsePutMultiRegionAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMultiRegionAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
