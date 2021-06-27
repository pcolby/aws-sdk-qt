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

#include "putaccountconfigurationresponse.h"
#include "putaccountconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::PutAccountConfigurationResponse
 * \brief The PutAccountConfigurationResponse class provides an interace for ACM PutAccountConfiguration responses.
 *
 * \inmodule QtAwsACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  You can use AWS Certificate Manager (ACM) to manage SSL/TLS certificates for your AWS-based websites and applications.
 *  For more information about using ACM, see the <a href="https://docs.aws.amazon.com/acm/latest/userguide/">AWS
 *  Certificate Manager User
 *
 * \sa AcmClient::putAccountConfiguration
 */

/*!
 * Constructs a PutAccountConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountConfigurationResponse::PutAccountConfigurationResponse(
        const PutAccountConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new PutAccountConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAccountConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountConfigurationRequest * PutAccountConfigurationResponse::request() const
{
    return static_cast<const PutAccountConfigurationRequest *>(AcmResponse::request());
}

/*!
 * \reimp
 * Parses a successful ACM PutAccountConfiguration \a response.
 */
void PutAccountConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ACM::PutAccountConfigurationResponsePrivate
 * \brief The PutAccountConfigurationResponsePrivate class provides private implementation for PutAccountConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsACM
 */

/*!
 * Constructs a PutAccountConfigurationResponsePrivate object with public implementation \a q.
 */
PutAccountConfigurationResponsePrivate::PutAccountConfigurationResponsePrivate(
    PutAccountConfigurationResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a ACM PutAccountConfiguration response element from \a xml.
 */
void PutAccountConfigurationResponsePrivate::parsePutAccountConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ACM
} // namespace QtAws
