// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsecurityconfigurationsresponse.h"
#include "listsecurityconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListSecurityConfigurationsResponse
 * \brief The ListSecurityConfigurationsResponse class provides an interace for Emr ListSecurityConfigurations responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSecurityConfigurations
 */

/*!
 * Constructs a ListSecurityConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSecurityConfigurationsResponse::ListSecurityConfigurationsResponse(
        const ListSecurityConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListSecurityConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListSecurityConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSecurityConfigurationsRequest * ListSecurityConfigurationsResponse::request() const
{
    Q_D(const ListSecurityConfigurationsResponse);
    return static_cast<const ListSecurityConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListSecurityConfigurations \a response.
 */
void ListSecurityConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSecurityConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListSecurityConfigurationsResponsePrivate
 * \brief The ListSecurityConfigurationsResponsePrivate class provides private implementation for ListSecurityConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListSecurityConfigurationsResponsePrivate object with public implementation \a q.
 */
ListSecurityConfigurationsResponsePrivate::ListSecurityConfigurationsResponsePrivate(
    ListSecurityConfigurationsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListSecurityConfigurations response element from \a xml.
 */
void ListSecurityConfigurationsResponsePrivate::parseListSecurityConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecurityConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
