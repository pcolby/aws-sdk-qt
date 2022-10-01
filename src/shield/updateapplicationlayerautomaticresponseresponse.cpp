// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationlayerautomaticresponseresponse.h"
#include "updateapplicationlayerautomaticresponseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateApplicationLayerAutomaticResponseResponse
 * \brief The UpdateApplicationLayerAutomaticResponseResponse class provides an interace for Shield UpdateApplicationLayerAutomaticResponse responses.
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
 * \sa ShieldClient::updateApplicationLayerAutomaticResponse
 */

/*!
 * Constructs a UpdateApplicationLayerAutomaticResponseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateApplicationLayerAutomaticResponseResponse::UpdateApplicationLayerAutomaticResponseResponse(
        const UpdateApplicationLayerAutomaticResponseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new UpdateApplicationLayerAutomaticResponseResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationLayerAutomaticResponseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateApplicationLayerAutomaticResponseRequest * UpdateApplicationLayerAutomaticResponseResponse::request() const
{
    Q_D(const UpdateApplicationLayerAutomaticResponseResponse);
    return static_cast<const UpdateApplicationLayerAutomaticResponseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield UpdateApplicationLayerAutomaticResponse \a response.
 */
void UpdateApplicationLayerAutomaticResponseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateApplicationLayerAutomaticResponseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::UpdateApplicationLayerAutomaticResponseResponsePrivate
 * \brief The UpdateApplicationLayerAutomaticResponseResponsePrivate class provides private implementation for UpdateApplicationLayerAutomaticResponseResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateApplicationLayerAutomaticResponseResponsePrivate object with public implementation \a q.
 */
UpdateApplicationLayerAutomaticResponseResponsePrivate::UpdateApplicationLayerAutomaticResponseResponsePrivate(
    UpdateApplicationLayerAutomaticResponseResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield UpdateApplicationLayerAutomaticResponse response element from \a xml.
 */
void UpdateApplicationLayerAutomaticResponseResponsePrivate::parseUpdateApplicationLayerAutomaticResponseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationLayerAutomaticResponseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
