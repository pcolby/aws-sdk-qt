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

#include "removemanagedscalingpolicyresponse.h"
#include "removemanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::RemoveManagedScalingPolicyResponse
 * \brief The RemoveManagedScalingPolicyResponse class provides an interace for EMR RemoveManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::removeManagedScalingPolicy
 */

/*!
 * Constructs a RemoveManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveManagedScalingPolicyResponse::RemoveManagedScalingPolicyResponse(
        const RemoveManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new RemoveManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new RemoveManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveManagedScalingPolicyRequest * RemoveManagedScalingPolicyResponse::request() const
{
    return static_cast<const RemoveManagedScalingPolicyRequest *>(EmrResponse::request());
}

/*!
 * \reimp
 * Parses a successful EMR RemoveManagedScalingPolicy \a response.
 */
void RemoveManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::RemoveManagedScalingPolicyResponsePrivate
 * \brief The RemoveManagedScalingPolicyResponsePrivate class provides private implementation for RemoveManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a RemoveManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
RemoveManagedScalingPolicyResponsePrivate::RemoveManagedScalingPolicyResponsePrivate(
    RemoveManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR RemoveManagedScalingPolicy response element from \a xml.
 */
void RemoveManagedScalingPolicyResponsePrivate::parseRemoveManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
