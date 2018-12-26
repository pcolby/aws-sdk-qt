/*
    Copyright 2013-2018 Paul Colby

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

#include "disableimportfindingsforproductresponse.h"
#include "disableimportfindingsforproductresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DisableImportFindingsForProductResponse
 * \brief The DisableImportFindingsForProductResponse class provides an interace for SecurityHub DisableImportFindingsForProduct responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::disableImportFindingsForProduct
 */

/*!
 * Constructs a DisableImportFindingsForProductResponse object for \a reply to \a request, with parent \a parent.
 */
DisableImportFindingsForProductResponse::DisableImportFindingsForProductResponse(
        const DisableImportFindingsForProductRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new DisableImportFindingsForProductResponsePrivate(this), parent)
{
    setRequest(new DisableImportFindingsForProductRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableImportFindingsForProductRequest * DisableImportFindingsForProductResponse::request() const
{
    Q_D(const DisableImportFindingsForProductResponse);
    return static_cast<const DisableImportFindingsForProductRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub DisableImportFindingsForProduct \a response.
 */
void DisableImportFindingsForProductResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableImportFindingsForProductResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::DisableImportFindingsForProductResponsePrivate
 * \brief The DisableImportFindingsForProductResponsePrivate class provides private implementation for DisableImportFindingsForProductResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DisableImportFindingsForProductResponsePrivate object with public implementation \a q.
 */
DisableImportFindingsForProductResponsePrivate::DisableImportFindingsForProductResponsePrivate(
    DisableImportFindingsForProductResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub DisableImportFindingsForProduct response element from \a xml.
 */
void DisableImportFindingsForProductResponsePrivate::parseDisableImportFindingsForProductResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableImportFindingsForProductResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
