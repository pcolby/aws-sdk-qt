// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemergencycontactsettingsresponse.h"
#include "updateemergencycontactsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateEmergencyContactSettingsResponse
 * \brief The UpdateEmergencyContactSettingsResponse class provides an interace for Shield UpdateEmergencyContactSettings responses.
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
 * \sa ShieldClient::updateEmergencyContactSettings
 */

/*!
 * Constructs a UpdateEmergencyContactSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmergencyContactSettingsResponse::UpdateEmergencyContactSettingsResponse(
        const UpdateEmergencyContactSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new UpdateEmergencyContactSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateEmergencyContactSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmergencyContactSettingsRequest * UpdateEmergencyContactSettingsResponse::request() const
{
    Q_D(const UpdateEmergencyContactSettingsResponse);
    return static_cast<const UpdateEmergencyContactSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Shield UpdateEmergencyContactSettings \a response.
 */
void UpdateEmergencyContactSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEmergencyContactSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Shield::UpdateEmergencyContactSettingsResponsePrivate
 * \brief The UpdateEmergencyContactSettingsResponsePrivate class provides private implementation for UpdateEmergencyContactSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateEmergencyContactSettingsResponsePrivate object with public implementation \a q.
 */
UpdateEmergencyContactSettingsResponsePrivate::UpdateEmergencyContactSettingsResponsePrivate(
    UpdateEmergencyContactSettingsResponse * const q) : ShieldResponsePrivate(q)
{

}

/*!
 * Parses a Shield UpdateEmergencyContactSettings response element from \a xml.
 */
void UpdateEmergencyContactSettingsResponsePrivate::parseUpdateEmergencyContactSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmergencyContactSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Shield
} // namespace QtAws
