// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsegmentresponse.h"
#include "getsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetSegmentResponse
 * \brief The GetSegmentResponse class provides an interace for Evidently GetSegment responses.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::getSegment
 */

/*!
 * Constructs a GetSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetSegmentResponse::GetSegmentResponse(
        const GetSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new GetSegmentResponsePrivate(this), parent)
{
    setRequest(new GetSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSegmentRequest * GetSegmentResponse::request() const
{
    Q_D(const GetSegmentResponse);
    return static_cast<const GetSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently GetSegment \a response.
 */
void GetSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::GetSegmentResponsePrivate
 * \brief The GetSegmentResponsePrivate class provides private implementation for GetSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetSegmentResponsePrivate object with public implementation \a q.
 */
GetSegmentResponsePrivate::GetSegmentResponsePrivate(
    GetSegmentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently GetSegment response element from \a xml.
 */
void GetSegmentResponsePrivate::parseGetSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
