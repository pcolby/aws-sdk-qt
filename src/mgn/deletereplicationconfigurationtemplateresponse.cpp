// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationconfigurationtemplateresponse.h"
#include "deletereplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteReplicationConfigurationTemplateResponse
 * \brief The DeleteReplicationConfigurationTemplateResponse class provides an interace for Mgn DeleteReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteReplicationConfigurationTemplate
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationConfigurationTemplateResponse::DeleteReplicationConfigurationTemplateResponse(
        const DeleteReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DeleteReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationConfigurationTemplateRequest * DeleteReplicationConfigurationTemplateResponse::request() const
{
    Q_D(const DeleteReplicationConfigurationTemplateResponse);
    return static_cast<const DeleteReplicationConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DeleteReplicationConfigurationTemplate \a response.
 */
void DeleteReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DeleteReplicationConfigurationTemplateResponsePrivate
 * \brief The DeleteReplicationConfigurationTemplateResponsePrivate class provides private implementation for DeleteReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
DeleteReplicationConfigurationTemplateResponsePrivate::DeleteReplicationConfigurationTemplateResponsePrivate(
    DeleteReplicationConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DeleteReplicationConfigurationTemplate response element from \a xml.
 */
void DeleteReplicationConfigurationTemplateResponsePrivate::parseDeleteReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
