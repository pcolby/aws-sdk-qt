// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesegmentresponse.h"
#include "deletesegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteSegmentResponse
 * \brief The DeleteSegmentResponse class provides an interace for Evidently DeleteSegment responses.
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
 * \sa EvidentlyClient::deleteSegment
 */

/*!
 * Constructs a DeleteSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSegmentResponse::DeleteSegmentResponse(
        const DeleteSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new DeleteSegmentResponsePrivate(this), parent)
{
    setRequest(new DeleteSegmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSegmentRequest * DeleteSegmentResponse::request() const
{
    Q_D(const DeleteSegmentResponse);
    return static_cast<const DeleteSegmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Evidently DeleteSegment \a response.
 */
void DeleteSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::DeleteSegmentResponsePrivate
 * \brief The DeleteSegmentResponsePrivate class provides private implementation for DeleteSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteSegmentResponsePrivate object with public implementation \a q.
 */
DeleteSegmentResponsePrivate::DeleteSegmentResponsePrivate(
    DeleteSegmentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently DeleteSegment response element from \a xml.
 */
void DeleteSegmentResponsePrivate::parseDeleteSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
