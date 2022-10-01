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
