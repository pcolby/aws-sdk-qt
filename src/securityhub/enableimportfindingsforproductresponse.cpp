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

#include "enableimportfindingsforproductresponse.h"
#include "enableimportfindingsforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductResponse
 * \brief The EnableImportFindingsForProductResponse class provides an interace for SecurityHub EnableImportFindingsForProduct responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::enableImportFindingsForProduct
 */

/*!
 * Constructs a EnableImportFindingsForProductResponse object for \a reply to \a request, with parent \a parent.
 */
EnableImportFindingsForProductResponse::EnableImportFindingsForProductResponse(
        const EnableImportFindingsForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new EnableImportFindingsForProductResponsePrivate(this), parent)
{
    setRequest(new EnableImportFindingsForProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableImportFindingsForProductRequest * EnableImportFindingsForProductResponse::request() const
{
    Q_D(const EnableImportFindingsForProductResponse);
    return static_cast<const EnableImportFindingsForProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub EnableImportFindingsForProduct \a response.
 */
void EnableImportFindingsForProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableImportFindingsForProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductResponsePrivate
 * \brief The EnableImportFindingsForProductResponsePrivate class provides private implementation for EnableImportFindingsForProductResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a EnableImportFindingsForProductResponsePrivate object with public implementation \a q.
 */
EnableImportFindingsForProductResponsePrivate::EnableImportFindingsForProductResponsePrivate(
    EnableImportFindingsForProductResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub EnableImportFindingsForProduct response element from \a xml.
 */
void EnableImportFindingsForProductResponsePrivate::parseEnableImportFindingsForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableImportFindingsForProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
