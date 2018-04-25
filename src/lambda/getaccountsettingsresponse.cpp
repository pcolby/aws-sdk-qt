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

#include "getaccountsettingsresponse.h"
#include "getaccountsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/*!
 * \class QtAws::Lambda::GetAccountSettingsResponse
 * \brief The GetAccountSettingsResponse class provides an interace for Lambda GetAccountSettings responses.
 *
 * \inmodule QtAwsLambda
 *
 *  <fullname>AWS Lambda</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Lambda API Reference</i>. The AWS Lambda Developer Guide provides additional information. For the
 *  service overview, see <a href="http://docs.aws.amazon.com/lambda/latest/dg/welcome.html">What is AWS Lambda</a>, and for
 *  information about how the service works, see <a
 *  href="http://docs.aws.amazon.com/lambda/latest/dg/lambda-introduction.html">AWS Lambda: How it Works</a> in the <b>AWS
 *  Lambda Developer
 *
 * \sa LambdaClient::getAccountSettings
 */

/*!
 * Constructs a GetAccountSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountSettingsResponse::GetAccountSettingsResponse(
        const GetAccountSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new GetAccountSettingsResponsePrivate(this), parent)
{
    setRequest(new GetAccountSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountSettingsRequest * GetAccountSettingsResponse::request() const
{
    Q_D(const GetAccountSettingsResponse);
    return static_cast<const GetAccountSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Lambda GetAccountSettings \a response.
 */
void GetAccountSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetAccountSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Lambda::GetAccountSettingsResponsePrivate
 * \brief The GetAccountSettingsResponsePrivate class provides private implementation for GetAccountSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsLambda
 */

/*!
 * Constructs a GetAccountSettingsResponsePrivate object with public implementation \a q.
 */
GetAccountSettingsResponsePrivate::GetAccountSettingsResponsePrivate(
    GetAccountSettingsResponse * const q) : LambdaResponsePrivate(q)
{

}

/*!
 * Parses a Lambda GetAccountSettings response element from \a xml.
 */
void GetAccountSettingsResponsePrivate::parseGetAccountSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSettingsResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
