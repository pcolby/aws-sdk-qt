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

#include "getaccountconfigurationresponse.h"
#include "getaccountconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::GetAccountConfigurationResponse
 * \brief The GetAccountConfigurationResponse class provides an interace for ACM GetAccountConfiguration responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::getAccountConfiguration
 */

/*!
 * Constructs a GetAccountConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetAccountConfigurationResponse::GetAccountConfigurationResponse(
        const GetAccountConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new GetAccountConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetAccountConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAccountConfigurationRequest * GetAccountConfigurationResponse::request() const
{
    Q_D(const GetAccountConfigurationResponse);
    return static_cast<const GetAccountConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ACM GetAccountConfiguration \a response.
 */
void GetAccountConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::GetAccountConfigurationResponsePrivate
 * \brief The GetAccountConfigurationResponsePrivate class provides private implementation for GetAccountConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a GetAccountConfigurationResponsePrivate object with public implementation \a q.
 */
GetAccountConfigurationResponsePrivate::GetAccountConfigurationResponsePrivate(
    GetAccountConfigurationResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM GetAccountConfiguration response element from \a xml.
 */
void GetAccountConfigurationResponsePrivate::parseGetAccountConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACM
} // namespace QtAws
