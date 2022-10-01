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

#include "disableapplicationlayerautomaticresponseresponse.h"
#include "disableapplicationlayerautomaticresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisableApplicationLayerAutomaticResponseResponse
 * \brief The DisableApplicationLayerAutomaticResponseResponse class provides an interace for Shield DisableApplicationLayerAutomaticResponse responses.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::disableApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a DisableApplicationLayerAutomaticResponseResponse object for \a reply to \a request, with parent \a parent.
 */
DisableApplicationLayerAutomaticResponseResponse::DisableApplicationLayerAutomaticResponseResponse(
        const DisableApplicationLayerAutomaticResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DisableApplicationLayerAutomaticResponseResponsePrivate(this), parent)
{
    setRequest(new DisableApplicationLayerAutomaticResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisableApplicationLayerAutomaticResponseRequest * DisableApplicationLayerAutomaticResponseResponse::request() const
{
    Q_D(const DisableApplicationLayerAutomaticResponseResponse);
    return static_cast<const DisableApplicationLayerAutomaticResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield DisableApplicationLayerAutomaticResponse \a response.
 */
void DisableApplicationLayerAutomaticResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisableApplicationLayerAutomaticResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::DisableApplicationLayerAutomaticResponseResponsePrivate
 * \brief The DisableApplicationLayerAutomaticResponseResponsePrivate class provides private implementation for DisableApplicationLayerAutomaticResponseResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisableApplicationLayerAutomaticResponseResponsePrivate object with public implementation \a q.
 */
DisableApplicationLayerAutomaticResponseResponsePrivate::DisableApplicationLayerAutomaticResponseResponsePrivate(
    DisableApplicationLayerAutomaticResponseResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield DisableApplicationLayerAutomaticResponse response element from \a xml.
 */
void DisableApplicationLayerAutomaticResponseResponsePrivate::parseDisableApplicationLayerAutomaticResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableApplicationLayerAutomaticResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
