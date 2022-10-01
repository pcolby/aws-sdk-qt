// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchconfigurationtemplateresponse.h"
#include "deletelaunchconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::DeleteLaunchConfigurationTemplateResponse
 * \brief The DeleteLaunchConfigurationTemplateResponse class provides an interace for Mgn DeleteLaunchConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::deleteLaunchConfigurationTemplate
 */

/*!
 * Constructs a DeleteLaunchConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLaunchConfigurationTemplateResponse::DeleteLaunchConfigurationTemplateResponse(
        const DeleteLaunchConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new DeleteLaunchConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteLaunchConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLaunchConfigurationTemplateRequest * DeleteLaunchConfigurationTemplateResponse::request() const
{
    Q_D(const DeleteLaunchConfigurationTemplateResponse);
    return static_cast<const DeleteLaunchConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn DeleteLaunchConfigurationTemplate \a response.
 */
void DeleteLaunchConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLaunchConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::DeleteLaunchConfigurationTemplateResponsePrivate
 * \brief The DeleteLaunchConfigurationTemplateResponsePrivate class provides private implementation for DeleteLaunchConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a DeleteLaunchConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
DeleteLaunchConfigurationTemplateResponsePrivate::DeleteLaunchConfigurationTemplateResponsePrivate(
    DeleteLaunchConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn DeleteLaunchConfigurationTemplate response element from \a xml.
 */
void DeleteLaunchConfigurationTemplateResponsePrivate::parseDeleteLaunchConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLaunchConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
