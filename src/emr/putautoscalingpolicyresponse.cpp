// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putautoscalingpolicyresponse.h"
#include "putautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutAutoScalingPolicyResponse
 * \brief The PutAutoScalingPolicyResponse class provides an interace for Emr PutAutoScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putAutoScalingPolicy
 */

/*!
 * Constructs a PutAutoScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutAutoScalingPolicyResponse::PutAutoScalingPolicyResponse(
        const PutAutoScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutAutoScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new PutAutoScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAutoScalingPolicyRequest * PutAutoScalingPolicyResponse::request() const
{
    Q_D(const PutAutoScalingPolicyResponse);
    return static_cast<const PutAutoScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutAutoScalingPolicy \a response.
 */
void PutAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAutoScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutAutoScalingPolicyResponsePrivate
 * \brief The PutAutoScalingPolicyResponsePrivate class provides private implementation for PutAutoScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutAutoScalingPolicyResponsePrivate object with public implementation \a q.
 */
PutAutoScalingPolicyResponsePrivate::PutAutoScalingPolicyResponsePrivate(
    PutAutoScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutAutoScalingPolicy response element from \a xml.
 */
void PutAutoScalingPolicyResponsePrivate::parsePutAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAutoScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
