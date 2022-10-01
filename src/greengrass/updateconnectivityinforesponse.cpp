// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectivityinforesponse.h"
#include "updateconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoResponse
 * \brief The UpdateConnectivityInfoResponse class provides an interace for Greengrass UpdateConnectivityInfo responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectivityInfo
 */

/*!
 * Constructs a UpdateConnectivityInfoResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectivityInfoResponse::UpdateConnectivityInfoResponse(
        const UpdateConnectivityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectivityInfoRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectivityInfoRequest * UpdateConnectivityInfoResponse::request() const
{
    Q_D(const UpdateConnectivityInfoResponse);
    return static_cast<const UpdateConnectivityInfoRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateConnectivityInfo \a response.
 */
void UpdateConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectivityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateConnectivityInfoResponsePrivate
 * \brief The UpdateConnectivityInfoResponsePrivate class provides private implementation for UpdateConnectivityInfoResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectivityInfoResponsePrivate object with public implementation \a q.
 */
UpdateConnectivityInfoResponsePrivate::UpdateConnectivityInfoResponsePrivate(
    UpdateConnectivityInfoResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateConnectivityInfo response element from \a xml.
 */
void UpdateConnectivityInfoResponsePrivate::parseUpdateConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectivityInfoResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
