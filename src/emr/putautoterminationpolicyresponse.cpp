// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
