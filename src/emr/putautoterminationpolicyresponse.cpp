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

#include "putautoterminationpolicyresponse.h"
#include "putautoterminationpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::PutAutoTerminationPolicyResponse
 * \brief The PutAutoTerminationPolicyResponse class provides an interace for Emr PutAutoTerminationPolicy responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::putAutoTerminationPolicy
 */

/*!
 * Constructs a PutAutoTerminationPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutAutoTerminationPolicyResponse::PutAutoTerminationPolicyResponse(
        const PutAutoTerminationPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new PutAutoTerminationPolicyResponsePrivate(this), parent)
{
    setRequest(new PutAutoTerminationPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAutoTerminationPolicyRequest * PutAutoTerminationPolicyResponse::request() const
{
    Q_D(const PutAutoTerminationPolicyResponse);
    return static_cast<const PutAutoTerminationPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr PutAutoTerminationPolicy \a response.
 */
void PutAutoTerminationPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAutoTerminationPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::PutAutoTerminationPolicyResponsePrivate
 * \brief The PutAutoTerminationPolicyResponsePrivate class provides private implementation for PutAutoTerminationPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a PutAutoTerminationPolicyResponsePrivate object with public implementation \a q.
 */
PutAutoTerminationPolicyResponsePrivate::PutAutoTerminationPolicyResponsePrivate(
    PutAutoTerminationPolicyResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr PutAutoTerminationPolicy response element from \a xml.
 */
void PutAutoTerminationPolicyResponsePrivate::parsePutAutoTerminationPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAutoTerminationPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
