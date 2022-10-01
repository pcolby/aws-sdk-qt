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

#include "removeautoscalingpolicyresponse.h"
#include "removeautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::RemoveAutoScalingPolicyResponse
 * \brief The RemoveAutoScalingPolicyResponse class provides an interace for Emr RemoveAutoScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
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
    : EmrResponse(new RemoveAutoScalingPolicyResponsePrivate(this), parent)
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
 * Parses a successful Emr RemoveAutoScalingPolicy \a response.
 */
void RemoveAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveAutoScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::RemoveAutoScalingPolicyResponsePrivate
 * \brief The RemoveAutoScalingPolicyResponsePrivate class provides private implementation for RemoveAutoScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a RemoveAutoScalingPolicyResponsePrivate object with public implementation \a q.
 */
RemoveAutoScalingPolicyResponsePrivate::RemoveAutoScalingPolicyResponsePrivate(
    RemoveAutoScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr RemoveAutoScalingPolicy response element from \a xml.
 */
void RemoveAutoScalingPolicyResponsePrivate::parseRemoveAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAutoScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
