// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelstepsresponse.h"
#include "cancelstepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CancelStepsResponse
 * \brief The CancelStepsResponse class provides an interace for Emr CancelSteps responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::cancelSteps
 */

/*!
 * Constructs a CancelStepsResponse object for \a reply to \a request, with parent \a parent.
 */
CancelStepsResponse::CancelStepsResponse(
        const CancelStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new CancelStepsResponsePrivate(this), parent)
{
    setRequest(new CancelStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelStepsRequest * CancelStepsResponse::request() const
{
    Q_D(const CancelStepsResponse);
    return static_cast<const CancelStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr CancelSteps \a response.
 */
void CancelStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::CancelStepsResponsePrivate
 * \brief The CancelStepsResponsePrivate class provides private implementation for CancelStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CancelStepsResponsePrivate object with public implementation \a q.
 */
CancelStepsResponsePrivate::CancelStepsResponsePrivate(
    CancelStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr CancelSteps response element from \a xml.
 */
void CancelStepsResponsePrivate::parseCancelStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
