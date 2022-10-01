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

#include "updatesecurityresponse.h"
#include "updatesecurityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateSecurityResponse
 * \brief The UpdateSecurityResponse class provides an interace for Kafka UpdateSecurity responses.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateSecurity
 */

/*!
 * Constructs a UpdateSecurityResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSecurityResponse::UpdateSecurityResponse(
        const UpdateSecurityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaResponse(new UpdateSecurityResponsePrivate(this), parent)
{
    setRequest(new UpdateSecurityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSecurityRequest * UpdateSecurityResponse::request() const
{
    Q_D(const UpdateSecurityResponse);
    return static_cast<const UpdateSecurityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kafka UpdateSecurity \a response.
 */
void UpdateSecurityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSecurityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kafka::UpdateSecurityResponsePrivate
 * \brief The UpdateSecurityResponsePrivate class provides private implementation for UpdateSecurityResponse.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateSecurityResponsePrivate object with public implementation \a q.
 */
UpdateSecurityResponsePrivate::UpdateSecurityResponsePrivate(
    UpdateSecurityResponse * const q) : KafkaResponsePrivate(q)
{

}

/*!
 * Parses a Kafka UpdateSecurity response element from \a xml.
 */
void UpdateSecurityResponsePrivate::parseUpdateSecurityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSecurityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kafka
} // namespace QtAws
