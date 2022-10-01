// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateglobalsettingsresponse.h"
#include "updateglobalsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsResponse
 * \brief The UpdateGlobalSettingsResponse class provides an interace for WellArchitected UpdateGlobalSettings responses.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::updateGlobalSettings
 */

/*!
 * Constructs a UpdateGlobalSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateGlobalSettingsResponse::UpdateGlobalSettingsResponse(
        const UpdateGlobalSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WellArchitectedResponse(new UpdateGlobalSettingsResponsePrivate(this), parent)
{
    setRequest(new UpdateGlobalSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateGlobalSettingsRequest * UpdateGlobalSettingsResponse::request() const
{
    Q_D(const UpdateGlobalSettingsResponse);
    return static_cast<const UpdateGlobalSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WellArchitected UpdateGlobalSettings \a response.
 */
void UpdateGlobalSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateGlobalSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WellArchitected::UpdateGlobalSettingsResponsePrivate
 * \brief The UpdateGlobalSettingsResponsePrivate class provides private implementation for UpdateGlobalSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateGlobalSettingsResponsePrivate object with public implementation \a q.
 */
UpdateGlobalSettingsResponsePrivate::UpdateGlobalSettingsResponsePrivate(
    UpdateGlobalSettingsResponse * const q) : WellArchitectedResponsePrivate(q)
{

}

/*!
 * Parses a WellArchitected UpdateGlobalSettings response element from \a xml.
 */
void UpdateGlobalSettingsResponsePrivate::parseUpdateGlobalSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateGlobalSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WellArchitected
} // namespace QtAws
