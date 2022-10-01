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

#include "putmanagedscalingpolicyresponse.h"
#include "putmanagedscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyResponse
 * \brief The PutManagedScalingPolicyResponse class provides an interace for Emr PutManagedScalingPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putManagedScalingPolicy
 */

/*!
 * Constructs a PutManagedScalingPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutManagedScalingPolicyResponse::PutManagedScalingPolicyResponse(
        const PutManagedScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutManagedScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new PutManagedScalingPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutManagedScalingPolicyRequest * PutManagedScalingPolicyResponse::request() const
{
    Q_D(const PutManagedScalingPolicyResponse);
    return static_cast<const PutManagedScalingPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutManagedScalingPolicy \a response.
 */
void PutManagedScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutManagedScalingPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutManagedScalingPolicyResponsePrivate
 * \brief The PutManagedScalingPolicyResponsePrivate class provides private implementation for PutManagedScalingPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutManagedScalingPolicyResponsePrivate object with public implementation \a q.
 */
PutManagedScalingPolicyResponsePrivate::PutManagedScalingPolicyResponsePrivate(
    PutManagedScalingPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutManagedScalingPolicy response element from \a xml.
 */
void PutManagedScalingPolicyResponsePrivate::parsePutManagedScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutManagedScalingPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
