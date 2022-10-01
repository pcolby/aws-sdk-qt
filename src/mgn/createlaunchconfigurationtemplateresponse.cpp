// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlaunchconfigurationtemplateresponse.h"
#include "createlaunchconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::CreateLaunchConfigurationTemplateResponse
 * \brief The CreateLaunchConfigurationTemplateResponse class provides an interace for Mgn CreateLaunchConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::createLaunchConfigurationTemplate
 */

/*!
 * Constructs a CreateLaunchConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLaunchConfigurationTemplateResponse::CreateLaunchConfigurationTemplateResponse(
        const CreateLaunchConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new CreateLaunchConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateLaunchConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLaunchConfigurationTemplateRequest * CreateLaunchConfigurationTemplateResponse::request() const
{
    Q_D(const CreateLaunchConfigurationTemplateResponse);
    return static_cast<const CreateLaunchConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn CreateLaunchConfigurationTemplate \a response.
 */
void CreateLaunchConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLaunchConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::CreateLaunchConfigurationTemplateResponsePrivate
 * \brief The CreateLaunchConfigurationTemplateResponsePrivate class provides private implementation for CreateLaunchConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a CreateLaunchConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
CreateLaunchConfigurationTemplateResponsePrivate::CreateLaunchConfigurationTemplateResponsePrivate(
    CreateLaunchConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn CreateLaunchConfigurationTemplate response element from \a xml.
 */
void CreateLaunchConfigurationTemplateResponsePrivate::parseCreateLaunchConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLaunchConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
