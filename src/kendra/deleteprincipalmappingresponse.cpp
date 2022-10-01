// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprincipalmappingresponse.h"
#include "deleteprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingResponse
 * \brief The DeletePrincipalMappingResponse class provides an interace for Kendra DeletePrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deletePrincipalMapping
 */

/*!
 * Constructs a DeletePrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePrincipalMappingResponse::DeletePrincipalMappingResponse(
        const DeletePrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeletePrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new DeletePrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePrincipalMappingRequest * DeletePrincipalMappingResponse::request() const
{
    Q_D(const DeletePrincipalMappingResponse);
    return static_cast<const DeletePrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeletePrincipalMapping \a response.
 */
void DeletePrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingResponsePrivate
 * \brief The DeletePrincipalMappingResponsePrivate class provides private implementation for DeletePrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeletePrincipalMappingResponsePrivate object with public implementation \a q.
 */
DeletePrincipalMappingResponsePrivate::DeletePrincipalMappingResponsePrivate(
    DeletePrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeletePrincipalMapping response element from \a xml.
 */
void DeletePrincipalMappingResponsePrivate::parseDeletePrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
