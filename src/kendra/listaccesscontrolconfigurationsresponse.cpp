// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listaccesscontrolconfigurationsresponse.h"
#include "listaccesscontrolconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsResponse
 * \brief The ListAccessControlConfigurationsResponse class provides an interace for Kendra ListAccessControlConfigurations responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listAccessControlConfigurations
 */

/*!
 * Constructs a ListAccessControlConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAccessControlConfigurationsResponse::ListAccessControlConfigurationsResponse(
        const ListAccessControlConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new ListAccessControlConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListAccessControlConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAccessControlConfigurationsRequest * ListAccessControlConfigurationsResponse::request() const
{
    Q_D(const ListAccessControlConfigurationsResponse);
    return static_cast<const ListAccessControlConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra ListAccessControlConfigurations \a response.
 */
void ListAccessControlConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAccessControlConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::ListAccessControlConfigurationsResponsePrivate
 * \brief The ListAccessControlConfigurationsResponsePrivate class provides private implementation for ListAccessControlConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListAccessControlConfigurationsResponsePrivate object with public implementation \a q.
 */
ListAccessControlConfigurationsResponsePrivate::ListAccessControlConfigurationsResponsePrivate(
    ListAccessControlConfigurationsResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra ListAccessControlConfigurations response element from \a xml.
 */
void ListAccessControlConfigurationsResponsePrivate::parseListAccessControlConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessControlConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
