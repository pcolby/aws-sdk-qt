// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalertmanagerdefinitionresponse.h"
#include "createalertmanagerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateAlertManagerDefinitionResponse
 * \brief The CreateAlertManagerDefinitionResponse class provides an interace for Amp CreateAlertManagerDefinition responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createAlertManagerDefinition
 */

/*!
 * Constructs a CreateAlertManagerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateAlertManagerDefinitionResponse::CreateAlertManagerDefinitionResponse(
        const CreateAlertManagerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new CreateAlertManagerDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateAlertManagerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateAlertManagerDefinitionRequest * CreateAlertManagerDefinitionResponse::request() const
{
    Q_D(const CreateAlertManagerDefinitionResponse);
    return static_cast<const CreateAlertManagerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp CreateAlertManagerDefinition \a response.
 */
void CreateAlertManagerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateAlertManagerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::CreateAlertManagerDefinitionResponsePrivate
 * \brief The CreateAlertManagerDefinitionResponsePrivate class provides private implementation for CreateAlertManagerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateAlertManagerDefinitionResponsePrivate object with public implementation \a q.
 */
CreateAlertManagerDefinitionResponsePrivate::CreateAlertManagerDefinitionResponsePrivate(
    CreateAlertManagerDefinitionResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp CreateAlertManagerDefinition response element from \a xml.
 */
void CreateAlertManagerDefinitionResponsePrivate::parseCreateAlertManagerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAlertManagerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
