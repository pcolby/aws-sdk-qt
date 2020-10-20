/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listcampaignsresponse.h"
#include "listcampaignsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListCampaignsResponse
 * \brief The ListCampaignsResponse class provides an interace for Personalize ListCampaigns responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listCampaigns
 */

/*!
 * Constructs a ListCampaignsResponse object for \a reply to \a request, with parent \a parent.
 */
ListCampaignsResponse::ListCampaignsResponse(
        const ListCampaignsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new ListCampaignsResponsePrivate(this), parent)
{
    setRequest(new ListCampaignsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListCampaignsRequest * ListCampaignsResponse::request() const
{
    Q_D(const ListCampaignsResponse);
    return static_cast<const ListCampaignsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize ListCampaigns \a response.
 */
void ListCampaignsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListCampaignsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::ListCampaignsResponsePrivate
 * \brief The ListCampaignsResponsePrivate class provides private implementation for ListCampaignsResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListCampaignsResponsePrivate object with public implementation \a q.
 */
ListCampaignsResponsePrivate::ListCampaignsResponsePrivate(
    ListCampaignsResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize ListCampaigns response element from \a xml.
 */
void ListCampaignsResponsePrivate::parseListCampaignsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListCampaignsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
