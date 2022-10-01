// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprincipalmappingresponse.h"
#include "describeprincipalmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingResponse
 * \brief The DescribePrincipalMappingResponse class provides an interace for Kendra DescribePrincipalMapping responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describePrincipalMapping
 */

/*!
 * Constructs a DescribePrincipalMappingResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePrincipalMappingResponse::DescribePrincipalMappingResponse(
        const DescribePrincipalMappingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribePrincipalMappingResponsePrivate(this), parent)
{
    setRequest(new DescribePrincipalMappingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePrincipalMappingRequest * DescribePrincipalMappingResponse::request() const
{
    Q_D(const DescribePrincipalMappingResponse);
    return static_cast<const DescribePrincipalMappingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribePrincipalMapping \a response.
 */
void DescribePrincipalMappingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePrincipalMappingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingResponsePrivate
 * \brief The DescribePrincipalMappingResponsePrivate class provides private implementation for DescribePrincipalMappingResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribePrincipalMappingResponsePrivate object with public implementation \a q.
 */
DescribePrincipalMappingResponsePrivate::DescribePrincipalMappingResponsePrivate(
    DescribePrincipalMappingResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribePrincipalMapping response element from \a xml.
 */
void DescribePrincipalMappingResponsePrivate::parseDescribePrincipalMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePrincipalMappingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
