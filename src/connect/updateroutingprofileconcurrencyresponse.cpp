// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateroutingprofileconcurrencyresponse.h"
#include "updateroutingprofileconcurrencyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::UpdateRoutingProfileConcurrencyResponse
 * \brief The UpdateRoutingProfileConcurrencyResponse class provides an interace for Connect UpdateRoutingProfileConcurrency responses.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::updateRoutingProfileConcurrency
 */

/*!
 * Constructs a UpdateRoutingProfileConcurrencyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRoutingProfileConcurrencyResponse::UpdateRoutingProfileConcurrencyResponse(
        const UpdateRoutingProfileConcurrencyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConnectResponse(new UpdateRoutingProfileConcurrencyResponsePrivate(this), parent)
{
    setRequest(new UpdateRoutingProfileConcurrencyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRoutingProfileConcurrencyRequest * UpdateRoutingProfileConcurrencyResponse::request() const
{
    Q_D(const UpdateRoutingProfileConcurrencyResponse);
    return static_cast<const UpdateRoutingProfileConcurrencyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Connect UpdateRoutingProfileConcurrency \a response.
 */
void UpdateRoutingProfileConcurrencyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRoutingProfileConcurrencyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Connect::UpdateRoutingProfileConcurrencyResponsePrivate
 * \brief The UpdateRoutingProfileConcurrencyResponsePrivate class provides private implementation for UpdateRoutingProfileConcurrencyResponse.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a UpdateRoutingProfileConcurrencyResponsePrivate object with public implementation \a q.
 */
UpdateRoutingProfileConcurrencyResponsePrivate::UpdateRoutingProfileConcurrencyResponsePrivate(
    UpdateRoutingProfileConcurrencyResponse * const q) : ConnectResponsePrivate(q)
{

}

/*!
 * Parses a Connect UpdateRoutingProfileConcurrency response element from \a xml.
 */
void UpdateRoutingProfileConcurrencyResponsePrivate::parseUpdateRoutingProfileConcurrencyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoutingProfileConcurrencyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Connect
} // namespace QtAws
