// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putprincipalmappingresponse.h"
#include "putprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::PutPrincipalMappingResponse
 * \brief The PutPrincipalMappingResponse class provides an interace for Kendra PutPrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::putPrincipalMapping
 */

/*!
 * Constructs a PutPrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
PutPrincipalMappingResponse::PutPrincipalMappingResponse(
        const PutPrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new PutPrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new PutPrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutPrincipalMappingRequest * PutPrincipalMappingResponse::request() const
{
    Q_D(const PutPrincipalMappingResponse);
    return static_cast<const PutPrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra PutPrincipalMapping \a response.
 */
void PutPrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutPrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::PutPrincipalMappingResponsePrivate
 * \brief The PutPrincipalMappingResponsePrivate class provides private implementation for PutPrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a PutPrincipalMappingResponsePrivate object with public implementation \a q.
 */
PutPrincipalMappingResponsePrivate::PutPrincipalMappingResponsePrivate(
    PutPrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra PutPrincipalMapping response element from \a xml.
 */
void PutPrincipalMappingResponsePrivate::parsePutPrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutPrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
