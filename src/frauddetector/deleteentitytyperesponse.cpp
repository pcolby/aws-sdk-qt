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

#include "deleteentitytyperesponse.h"
#include "deleteentitytyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeResponse
 * \brief The DeleteEntityTypeResponse class provides an interace for FraudDetector DeleteEntityType responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::deleteEntityType
 */

/*!
 * Constructs a DeleteEntityTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEntityTypeResponse::DeleteEntityTypeResponse(
        const DeleteEntityTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new DeleteEntityTypeResponsePrivate(this), parent)
{
    setRequest(new DeleteEntityTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEntityTypeRequest * DeleteEntityTypeResponse::request() const
{
    Q_D(const DeleteEntityTypeResponse);
    return static_cast<const DeleteEntityTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector DeleteEntityType \a response.
 */
void DeleteEntityTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEntityTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::DeleteEntityTypeResponsePrivate
 * \brief The DeleteEntityTypeResponsePrivate class provides private implementation for DeleteEntityTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a DeleteEntityTypeResponsePrivate object with public implementation \a q.
 */
DeleteEntityTypeResponsePrivate::DeleteEntityTypeResponsePrivate(
    DeleteEntityTypeResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector DeleteEntityType response element from \a xml.
 */
void DeleteEntityTypeResponsePrivate::parseDeleteEntityTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEntityTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
