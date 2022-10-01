// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putalertmanagerdefinitionresponse.h"
#include "putalertmanagerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::PutAlertManagerDefinitionResponse
 * \brief The PutAlertManagerDefinitionResponse class provides an interace for Amp PutAlertManagerDefinition responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::putAlertManagerDefinition
 */

/*!
 * Constructs a PutAlertManagerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
PutAlertManagerDefinitionResponse::PutAlertManagerDefinitionResponse(
        const PutAlertManagerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new PutAlertManagerDefinitionResponsePrivate(this), parent)
{
    setRequest(new PutAlertManagerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAlertManagerDefinitionRequest * PutAlertManagerDefinitionResponse::request() const
{
    Q_D(const PutAlertManagerDefinitionResponse);
    return static_cast<const PutAlertManagerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp PutAlertManagerDefinition \a response.
 */
void PutAlertManagerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAlertManagerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::PutAlertManagerDefinitionResponsePrivate
 * \brief The PutAlertManagerDefinitionResponsePrivate class provides private implementation for PutAlertManagerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a PutAlertManagerDefinitionResponsePrivate object with public implementation \a q.
 */
PutAlertManagerDefinitionResponsePrivate::PutAlertManagerDefinitionResponsePrivate(
    PutAlertManagerDefinitionResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp PutAlertManagerDefinition response element from \a xml.
 */
void PutAlertManagerDefinitionResponsePrivate::parsePutAlertManagerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAlertManagerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
