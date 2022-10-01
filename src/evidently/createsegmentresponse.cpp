// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsegmentresponse.h"
#include "createsegmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateSegmentResponse
 * \brief The CreateSegmentResponse class provides an interace for Evidently CreateSegment responses.
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
 * \sa EvidentlyClient::createSegment
 */

/*!
 * Constructs a CreateSegmentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSegmentResponse::CreateSegmentResponse(
        const CreateSegmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EvidentlyResponse(new CreateSegmentResponsePrivate(this), parent)
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
 * Parses a successful Evidently CreateSegment \a response.
 */
void CreateSegmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSegmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Evidently::CreateSegmentResponsePrivate
 * \brief The CreateSegmentResponsePrivate class provides private implementation for CreateSegmentResponse.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateSegmentResponsePrivate object with public implementation \a q.
 */
CreateSegmentResponsePrivate::CreateSegmentResponsePrivate(
    CreateSegmentResponse * const q) : EvidentlyResponsePrivate(q)
{

}

/*!
 * Parses a Evidently CreateSegment response element from \a xml.
 */
void CreateSegmentResponsePrivate::parseCreateSegmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSegmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Evidently
} // namespace QtAws
