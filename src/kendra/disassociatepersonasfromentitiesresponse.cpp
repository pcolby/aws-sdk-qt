// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatepersonasfromentitiesresponse.h"
#include "disassociatepersonasfromentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesResponse
 * \brief The DisassociatePersonasFromEntitiesResponse class provides an interace for Kendra DisassociatePersonasFromEntities responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociatePersonasFromEntities
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociatePersonasFromEntitiesResponse::DisassociatePersonasFromEntitiesResponse(
        const DisassociatePersonasFromEntitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DisassociatePersonasFromEntitiesResponsePrivate(this), parent)
{
    setRequest(new DisassociatePersonasFromEntitiesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociatePersonasFromEntitiesRequest * DisassociatePersonasFromEntitiesResponse::request() const
{
    Q_D(const DisassociatePersonasFromEntitiesResponse);
    return static_cast<const DisassociatePersonasFromEntitiesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DisassociatePersonasFromEntities \a response.
 */
void DisassociatePersonasFromEntitiesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociatePersonasFromEntitiesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesResponsePrivate
 * \brief The DisassociatePersonasFromEntitiesResponsePrivate class provides private implementation for DisassociatePersonasFromEntitiesResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesResponsePrivate object with public implementation \a q.
 */
DisassociatePersonasFromEntitiesResponsePrivate::DisassociatePersonasFromEntitiesResponsePrivate(
    DisassociatePersonasFromEntitiesResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DisassociatePersonasFromEntities response element from \a xml.
 */
void DisassociatePersonasFromEntitiesResponsePrivate::parseDisassociatePersonasFromEntitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociatePersonasFromEntitiesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
