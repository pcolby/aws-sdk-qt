// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletealertmanagerdefinitionresponse.h"
#include "deletealertmanagerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteAlertManagerDefinitionResponse
 * \brief The DeleteAlertManagerDefinitionResponse class provides an interace for Amp DeleteAlertManagerDefinition responses.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteAlertManagerDefinition
 */

/*!
 * Constructs a DeleteAlertManagerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAlertManagerDefinitionResponse::DeleteAlertManagerDefinitionResponse(
        const DeleteAlertManagerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmpResponse(new DeleteAlertManagerDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteAlertManagerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAlertManagerDefinitionRequest * DeleteAlertManagerDefinitionResponse::request() const
{
    Q_D(const DeleteAlertManagerDefinitionResponse);
    return static_cast<const DeleteAlertManagerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Amp DeleteAlertManagerDefinition \a response.
 */
void DeleteAlertManagerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAlertManagerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Amp::DeleteAlertManagerDefinitionResponsePrivate
 * \brief The DeleteAlertManagerDefinitionResponsePrivate class provides private implementation for DeleteAlertManagerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteAlertManagerDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteAlertManagerDefinitionResponsePrivate::DeleteAlertManagerDefinitionResponsePrivate(
    DeleteAlertManagerDefinitionResponse * const q) : AmpResponsePrivate(q)
{

}

/*!
 * Parses a Amp DeleteAlertManagerDefinition response element from \a xml.
 */
void DeleteAlertManagerDefinitionResponsePrivate::parseDeleteAlertManagerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAlertManagerDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Amp
} // namespace QtAws
