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

#include "getmanagedscalingpolicyresponse.h"
#include "getmanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::GetManagedScalingPolicyResponse
 * \brief The GetManagedScalingPolicyResponse class provides an interace for EMR GetManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getManagedScalingPolicy
 */

/*!
 * Constructs a GetManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetManagedScalingPolicyResponse::GetManagedScalingPolicyResponse(
        const GetManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new GetManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetManagedScalingPolicyRequest * GetManagedScalingPolicyResponse::request() const
{
    Q_D(const GetManagedScalingPolicyResponse);
    return static_cast<const GetManagedScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR GetManagedScalingPolicy \a response.
 */
void GetManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::GetManagedScalingPolicyResponsePrivate
 * \brief The GetManagedScalingPolicyResponsePrivate class provides private implementation for GetManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a GetManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
GetManagedScalingPolicyResponsePrivate::GetManagedScalingPolicyResponsePrivate(
    GetManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR GetManagedScalingPolicy response element from \a xml.
 */
void GetManagedScalingPolicyResponsePrivate::parseGetManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
