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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
