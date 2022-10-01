// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateappresponse.h"
#include "updateappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Sms {

/*!
 * \class QtAws::Sms::UpdateAppResponse
 * \brief The UpdateAppResponse class provides an interace for Sms UpdateApp responses.
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
 * \sa SmsClient::updateApp
 */

/*!
 * Constructs a UpdateAppResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAppResponse::UpdateAppResponse(
        const UpdateAppRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SmsResponse(new UpdateAppResponsePrivate(this), parent)
{
    setRequest(new UpdateAppRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAppRequest * UpdateAppResponse::request() const
{
    Q_D(const UpdateAppResponse);
    return static_cast<const UpdateAppRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Sms UpdateApp \a response.
 */
void UpdateAppResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAppResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Sms::UpdateAppResponsePrivate
 * \brief The UpdateAppResponsePrivate class provides private implementation for UpdateAppResponse.
 * \internal
 *
 * \inmodule QtAwsSms
 */

/*!
 * Constructs a UpdateAppResponsePrivate object with public implementation \a q.
 */
UpdateAppResponsePrivate::UpdateAppResponsePrivate(
    UpdateAppResponse * const q) : SmsResponsePrivate(q)
{

}

/*!
 * Parses a Sms UpdateApp response element from \a xml.
 */
void UpdateAppResponsePrivate::parseUpdateAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAppResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Sms
} // namespace QtAws
