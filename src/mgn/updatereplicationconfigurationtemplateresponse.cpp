// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationtemplateresponse.h"
#include "updatereplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationTemplateResponse
 * \brief The UpdateReplicationConfigurationTemplateResponse class provides an interace for Mgn UpdateReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateReplicationConfigurationTemplate
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationConfigurationTemplateResponse::UpdateReplicationConfigurationTemplateResponse(
        const UpdateReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new UpdateReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationConfigurationTemplateRequest * UpdateReplicationConfigurationTemplateResponse::request() const
{
    Q_D(const UpdateReplicationConfigurationTemplateResponse);
    return static_cast<const UpdateReplicationConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn UpdateReplicationConfigurationTemplate \a response.
 */
void UpdateReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationTemplateResponsePrivate
 * \brief The UpdateReplicationConfigurationTemplateResponsePrivate class provides private implementation for UpdateReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
UpdateReplicationConfigurationTemplateResponsePrivate::UpdateReplicationConfigurationTemplateResponsePrivate(
    UpdateReplicationConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn UpdateReplicationConfigurationTemplate response element from \a xml.
 */
void UpdateReplicationConfigurationTemplateResponsePrivate::parseUpdateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
