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

#include "updaterulemetadataresponse.h"
#include "updaterulemetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateRuleMetadataResponse
 * \brief The UpdateRuleMetadataResponse class provides an interace for FraudDetector UpdateRuleMetadata responses.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateRuleMetadata
 */

/*!
 * Constructs a UpdateRuleMetadataResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRuleMetadataResponse::UpdateRuleMetadataResponse(
        const UpdateRuleMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FraudDetectorResponse(new UpdateRuleMetadataResponsePrivate(this), parent)
{
    setRequest(new UpdateRuleMetadataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRuleMetadataRequest * UpdateRuleMetadataResponse::request() const
{
    Q_D(const UpdateRuleMetadataResponse);
    return static_cast<const UpdateRuleMetadataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FraudDetector UpdateRuleMetadata \a response.
 */
void UpdateRuleMetadataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRuleMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FraudDetector::UpdateRuleMetadataResponsePrivate
 * \brief The UpdateRuleMetadataResponsePrivate class provides private implementation for UpdateRuleMetadataResponse.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateRuleMetadataResponsePrivate object with public implementation \a q.
 */
UpdateRuleMetadataResponsePrivate::UpdateRuleMetadataResponsePrivate(
    UpdateRuleMetadataResponse * const q) : FraudDetectorResponsePrivate(q)
{

}

/*!
 * Parses a FraudDetector UpdateRuleMetadata response element from \a xml.
 */
void UpdateRuleMetadataResponsePrivate::parseUpdateRuleMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRuleMetadataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FraudDetector
} // namespace QtAws
