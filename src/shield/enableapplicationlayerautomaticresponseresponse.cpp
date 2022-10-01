// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableapplicationlayerautomaticresponseresponse.h"
#include "enableapplicationlayerautomaticresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::EnableApplicationLayerAutomaticResponseResponse
 * \brief The EnableApplicationLayerAutomaticResponseResponse class provides an interace for Shield EnableApplicationLayerAutomaticResponse responses.
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
 * \sa ShieldClient::enableApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a EnableApplicationLayerAutomaticResponseResponse object for \a reply to \a request, with parent \a parent.
 */
EnableApplicationLayerAutomaticResponseResponse::EnableApplicationLayerAutomaticResponseResponse(
        const EnableApplicationLayerAutomaticResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new EnableApplicationLayerAutomaticResponseResponsePrivate(this), parent)
{
    setRequest(new EnableApplicationLayerAutomaticResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const EnableApplicationLayerAutomaticResponseRequest * EnableApplicationLayerAutomaticResponseResponse::request() const
{
    Q_D(const EnableApplicationLayerAutomaticResponseResponse);
    return static_cast<const EnableApplicationLayerAutomaticResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield EnableApplicationLayerAutomaticResponse \a response.
 */
void EnableApplicationLayerAutomaticResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(EnableApplicationLayerAutomaticResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::EnableApplicationLayerAutomaticResponseResponsePrivate
 * \brief The EnableApplicationLayerAutomaticResponseResponsePrivate class provides private implementation for EnableApplicationLayerAutomaticResponseResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a EnableApplicationLayerAutomaticResponseResponsePrivate object with public implementation \a q.
 */
EnableApplicationLayerAutomaticResponseResponsePrivate::EnableApplicationLayerAutomaticResponseResponsePrivate(
    EnableApplicationLayerAutomaticResponseResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield EnableApplicationLayerAutomaticResponse response element from \a xml.
 */
void EnableApplicationLayerAutomaticResponseResponsePrivate::parseEnableApplicationLayerAutomaticResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableApplicationLayerAutomaticResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
