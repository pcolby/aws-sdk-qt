// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
