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

#include "testidentityproviderresponse.h"
#include "testidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Transfer {

/*!
 * \class QtAws::Transfer::TestIdentityProviderResponse
 * \brief The TestIdentityProviderResponse class provides an interace for Transfer TestIdentityProvider responses.
 *
 * \inmodule QtAwsTransfer
 *
 *
 * \sa TransferClient::testIdentityProvider
 */

/*!
 * Constructs a TestIdentityProviderResponse object for \a reply to \a request, with parent \a parent.
 */
TestIdentityProviderResponse::TestIdentityProviderResponse(
        const TestIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TransferResponse(new TestIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new TestIdentityProviderRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestIdentityProviderRequest * TestIdentityProviderResponse::request() const
{
    Q_D(const TestIdentityProviderResponse);
    return static_cast<const TestIdentityProviderRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Transfer TestIdentityProvider \a response.
 */
void TestIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestIdentityProviderResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Transfer::TestIdentityProviderResponsePrivate
 * \brief The TestIdentityProviderResponsePrivate class provides private implementation for TestIdentityProviderResponse.
 * \internal
 *
 * \inmodule QtAwsTransfer
 */

/*!
 * Constructs a TestIdentityProviderResponsePrivate object with public implementation \a q.
 */
TestIdentityProviderResponsePrivate::TestIdentityProviderResponsePrivate(
    TestIdentityProviderResponse * const q) : TransferResponsePrivate(q)
{

}

/*!
 * Parses a Transfer TestIdentityProvider response element from \a xml.
 */
void TestIdentityProviderResponsePrivate::parseTestIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestIdentityProviderResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Transfer
} // namespace QtAws
