// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "connectcampaignsresponse.h"
#include "connectcampaignsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsResponse
 * \brief The ConnectCampaignsResponse class provides an interface for ConnectCampaigns responses.
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ConnectCampaignsResponse object with parent \a parent.
 */
ConnectCampaignsResponse::ConnectCampaignsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ConnectCampaignsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ConnectCampaignsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ConnectCampaignsResponsePrivate.
 */
ConnectCampaignsResponse::ConnectCampaignsResponse(ConnectCampaignsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ConnectCampaignsResponse::parseFailure(QIODevice &response)
{
    //Q_D(ConnectCampaignsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::ConnectCampaigns::ConnectCampaignsResponsePrivate
 * \brief The ConnectCampaignsResponsePrivate class provides private implementation for ConnectCampaignsResponse.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ConnectCampaignsResponsePrivate object with public implementation \a q.
 */
ConnectCampaignsResponsePrivate::ConnectCampaignsResponsePrivate(
    ConnectCampaignsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
