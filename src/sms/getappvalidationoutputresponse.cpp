// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getappvalidationoutputresponse.h"
#include "getappvalidationoutputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::GetAppValidationOutputResponse
 * \brief The GetAppValidationOutputResponse class provides an interace for Sms GetAppValidationOutput responses.
 *
 * \inmodule QtAwsSms
 *
 *  <b>
 * 
 *  <b>Product update</b>
 * 
 *  </p
 * 
 *  We recommend <a href="http://aws.amazon.com/application-migration-service">Amazon Web Services Application Migration
 *  Service</a> (Amazon Web Services MGN) as the primary migration service for lift-and-shift migrations. If Amazon Web
 *  Services MGN is unavailable in a specific Amazon Web Services Region, you can use the Server Migration Service APIs
 *  through March
 * 
 *  2023> </b>
 * 
 *  Server Migration Service (Server Migration Service) makes it easier and faster for you to migrate your on-premises
 *  workloads to Amazon Web Services. To learn more about Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/server-migration-service/">Server Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/">Server Migration Service User Guide</a>
 *
 * \sa SmsClient::getAppValidationOutput
 */

/*!
 * Constructs a GetAppValidationOutputResponse object for \a reply to \a request, with parent \a parent.
 */
GetAppValidationOutputResponse::GetAppValidationOutputResponse(
        const GetAppValidationOutputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new GetAppValidationOutputResponsePrivate(this), parent)
{
    setRequest(new GetAppValidationOutputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetAppValidationOutputRequest * GetAppValidationOutputResponse::request() const
{
    Q_D(const GetAppValidationOutputResponse);
    return static_cast<const GetAppValidationOutputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms GetAppValidationOutput \a response.
 */
void GetAppValidationOutputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetAppValidationOutputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::GetAppValidationOutputResponsePrivate
 * \brief The GetAppValidationOutputResponsePrivate class provides private implementation for GetAppValidationOutputResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a GetAppValidationOutputResponsePrivate object with public implementation \a q.
 */
GetAppValidationOutputResponsePrivate::GetAppValidationOutputResponsePrivate(
    GetAppValidationOutputResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms GetAppValidationOutput response element from \a xml.
 */
void GetAppValidationOutputResponsePrivate::parseGetAppValidationOutputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppValidationOutputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
