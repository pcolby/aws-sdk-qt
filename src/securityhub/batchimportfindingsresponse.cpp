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

#include "batchimportfindingsresponse.h"
#include "batchimportfindingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::BatchImportFindingsResponse
 * \brief The BatchImportFindingsResponse class provides an interace for SecurityHub BatchImportFindings responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::batchImportFindings
 */

/*!
 * Constructs a BatchImportFindingsResponse object for \a reply to \a request, with parent \a parent.
 */
BatchImportFindingsResponse::BatchImportFindingsResponse(
        const BatchImportFindingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new BatchImportFindingsResponsePrivate(this), parent)
{
    setRequest(new BatchImportFindingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchImportFindingsRequest * BatchImportFindingsResponse::request() const
{
    Q_D(const BatchImportFindingsResponse);
    return static_cast<const BatchImportFindingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub BatchImportFindings \a response.
 */
void BatchImportFindingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchImportFindingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::BatchImportFindingsResponsePrivate
 * \brief The BatchImportFindingsResponsePrivate class provides private implementation for BatchImportFindingsResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a BatchImportFindingsResponsePrivate object with public implementation \a q.
 */
BatchImportFindingsResponsePrivate::BatchImportFindingsResponsePrivate(
    BatchImportFindingsResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub BatchImportFindings response element from \a xml.
 */
void BatchImportFindingsResponsePrivate::parseBatchImportFindingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchImportFindingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
