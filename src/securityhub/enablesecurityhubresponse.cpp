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

#include "enablesecurityhubresponse.h"
#include "enablesecurityhubresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::EnableSecurityHubResponse
 * \brief The EnableSecurityHubResponse class provides an interace for SecurityHub EnableSecurityHub responses.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::enableSecurityHub
 */

/*!
 * Constructs a EnableSecurityHubResponse object for \a reply to \a request, with parent \a parent.
 */
EnableSecurityHubResponse::EnableSecurityHubResponse(
        const EnableSecurityHubRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecurityHubResponse(new EnableSecurityHubResponsePrivate(this), parent)
{
    setRequest(new EnableSecurityHubRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableSecurityHubRequest * EnableSecurityHubResponse::request() const
{
    Q_D(const EnableSecurityHubResponse);
    return static_cast<const EnableSecurityHubRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SecurityHub EnableSecurityHub \a response.
 */
void EnableSecurityHubResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableSecurityHubResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SecurityHub::EnableSecurityHubResponsePrivate
 * \brief The EnableSecurityHubResponsePrivate class provides private implementation for EnableSecurityHubResponse.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a EnableSecurityHubResponsePrivate object with public implementation \a q.
 */
EnableSecurityHubResponsePrivate::EnableSecurityHubResponsePrivate(
    EnableSecurityHubResponse * const q) : SecurityHubResponsePrivate(q)
{

}

/*!
 * Parses a SecurityHub EnableSecurityHub response element from \a xml.
 */
void EnableSecurityHubResponsePrivate::parseEnableSecurityHubResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSecurityHubResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SecurityHub
} // namespace QtAws
