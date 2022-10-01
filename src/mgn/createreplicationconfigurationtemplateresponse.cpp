// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreplicationconfigurationtemplateresponse.h"
#include "createreplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::CreateReplicationConfigurationTemplateResponse
 * \brief The CreateReplicationConfigurationTemplateResponse class provides an interace for Mgn CreateReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::createReplicationConfigurationTemplate
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationConfigurationTemplateResponse::CreateReplicationConfigurationTemplateResponse(
        const CreateReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new CreateReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationConfigurationTemplateRequest * CreateReplicationConfigurationTemplateResponse::request() const
{
    Q_D(const CreateReplicationConfigurationTemplateResponse);
    return static_cast<const CreateReplicationConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn CreateReplicationConfigurationTemplate \a response.
 */
void CreateReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::CreateReplicationConfigurationTemplateResponsePrivate
 * \brief The CreateReplicationConfigurationTemplateResponsePrivate class provides private implementation for CreateReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
CreateReplicationConfigurationTemplateResponsePrivate::CreateReplicationConfigurationTemplateResponsePrivate(
    CreateReplicationConfigurationTemplateResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn CreateReplicationConfigurationTemplate response element from \a xml.
 */
void CreateReplicationConfigurationTemplateResponsePrivate::parseCreateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
