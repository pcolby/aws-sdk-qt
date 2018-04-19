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

#include "removeautoscalingpolicyresponse.h"
#include "removeautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RemoveAutoScalingPolicyResponse
 * \brief The RemoveAutoScalingPolicyResponse class provides an interace for EMR RemoveAutoScalingPolicy responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easy to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS products to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data
 *
 * \sa EmrClient::removeAutoScalingPolicy
 */

/*!
 * Constructs a RemoveAutoScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveAutoScalingPolicyResponse::RemoveAutoScalingPolicyResponse(
        const RemoveAutoScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new RemoveAutoScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new RemoveAutoScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveAutoScalingPolicyRequest * RemoveAutoScalingPolicyResponse::request() const
{
    Q_D(const RemoveAutoScalingPolicyResponse);
    return static_cast<const RemoveAutoScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR RemoveAutoScalingPolicy \a response.
 */
void RemoveAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveAutoScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::RemoveAutoScalingPolicyResponsePrivate
 * \brief The RemoveAutoScalingPolicyResponsePrivate class provides private implementation for RemoveAutoScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a RemoveAutoScalingPolicyResponsePrivate object with public implementation \a q.
 */
RemoveAutoScalingPolicyResponsePrivate::RemoveAutoScalingPolicyResponsePrivate(
    RemoveAutoScalingPolicyResponse * const q) : EMRResponsePrivate(q)
{

}

/*!
 * Parses a EMR RemoveAutoScalingPolicy response element from \a xml.
 */
void RemoveAutoScalingPolicyResponsePrivate::parseRemoveAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAutoScalingPolicyResponse"));
    /// @todo
}

} // namespace EMR
} // namespace QtAws
