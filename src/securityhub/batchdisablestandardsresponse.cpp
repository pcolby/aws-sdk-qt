/*
    Copyright 2013-2019 Paul Colby

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

#include "batchdisablestandardsresponse.h"
#include "batchdisablestandardsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::BatchDisableStandardsResponse
 * \brief The BatchDisableStandardsResponse class provides an interace for SecurityHub BatchDisableStandards responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::batchDisableStandards
 */

/*!
 * Constructs a BatchDisableStandardsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisableStandardsResponse::BatchDisableStandardsResponse(
        const BatchDisableStandardsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new BatchDisableStandardsResponsePrivate(this), parent)
{
    setRequest(new BatchDisableStandardsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisableStandardsRequest * BatchDisableStandardsResponse::request() const
{
    Q_D(const BatchDisableStandardsResponse);
    return static_cast<const BatchDisableStandardsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub BatchDisableStandards \a response.
 */
void BatchDisableStandardsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisableStandardsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::BatchDisableStandardsResponsePrivate
 * \brief The BatchDisableStandardsResponsePrivate class provides private implementation for BatchDisableStandardsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a BatchDisableStandardsResponsePrivate object with public implementation \a q.
 */
BatchDisableStandardsResponsePrivate::BatchDisableStandardsResponsePrivate(
    BatchDisableStandardsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub BatchDisableStandards response element from \a xml.
 */
void BatchDisableStandardsResponsePrivate::parseBatchDisableStandardsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisableStandardsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
