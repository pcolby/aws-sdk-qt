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

#include "getautoterminationpolicyresponse.h"
#include "getautoterminationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyResponse
 * \brief The GetAutoTerminationPolicyResponse class provides an interace for Emr GetAutoTerminationPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::getAutoTerminationPolicy
 */

/*!
 * Constructs a GetAutoTerminationPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
GetAutoTerminationPolicyResponse::GetAutoTerminationPolicyResponse(
        const GetAutoTerminationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new GetAutoTerminationPolicyResponsePrivate(this), parent)
{
    setRequest(new GetAutoTerminationPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAutoTerminationPolicyRequest * GetAutoTerminationPolicyResponse::request() const
{
    Q_D(const GetAutoTerminationPolicyResponse);
    return static_cast<const GetAutoTerminationPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr GetAutoTerminationPolicy \a response.
 */
void GetAutoTerminationPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAutoTerminationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::GetAutoTerminationPolicyResponsePrivate
 * \brief The GetAutoTerminationPolicyResponsePrivate class provides private implementation for GetAutoTerminationPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a GetAutoTerminationPolicyResponsePrivate object with public implementation \a q.
 */
GetAutoTerminationPolicyResponsePrivate::GetAutoTerminationPolicyResponsePrivate(
    GetAutoTerminationPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr GetAutoTerminationPolicy response element from \a xml.
 */
void GetAutoTerminationPolicyResponsePrivate::parseGetAutoTerminationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAutoTerminationPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
