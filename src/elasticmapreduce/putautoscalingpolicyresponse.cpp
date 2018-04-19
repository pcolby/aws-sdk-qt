/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putautoscalingpolicyresponse.h"
#include "putautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::PutAutoScalingPolicyResponse
 * \brief The PutAutoScalingPolicyResponse class provides an interace for EMR PutAutoScalingPolicy responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
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
    : EMRResponse(new PutAutoScalingPolicyResponsePrivate(this), parent)
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
 * Parses a successful EMR PutAutoScalingPolicy \a response.
 */
void PutAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutAutoScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::PutAutoScalingPolicyResponsePrivate
 * \brief The PutAutoScalingPolicyResponsePrivate class provides private implementation for PutAutoScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a PutAutoScalingPolicyResponsePrivate object with public implementation \a q.
 */
PutAutoScalingPolicyResponsePrivate::PutAutoScalingPolicyResponsePrivate(
    PutAutoScalingPolicyResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR PutAutoScalingPolicy response element from \a xml.
 */
void PutAutoScalingPolicyResponsePrivate::parsePutAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAutoScalingPolicyResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
