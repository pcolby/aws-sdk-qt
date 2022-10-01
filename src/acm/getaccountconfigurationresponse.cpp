// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccountconfigurationresponse.h"
#include "getaccountconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::GetAccountConfigurationResponse
 * \brief The GetAccountConfigurationResponse class provides an interace for Acm GetAccountConfiguration responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
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
 * Parses a successful Acm GetAccountConfiguration \a response.
 */
void GetAccountConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAccountConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::GetAccountConfigurationResponsePrivate
 * \brief The GetAccountConfigurationResponsePrivate class provides private implementation for GetAccountConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a GetAccountConfigurationResponsePrivate object with public implementation \a q.
 */
GetAccountConfigurationResponsePrivate::GetAccountConfigurationResponsePrivate(
    GetAccountConfigurationResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm GetAccountConfiguration response element from \a xml.
 */
void GetAccountConfigurationResponsePrivate::parseGetAccountConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws
