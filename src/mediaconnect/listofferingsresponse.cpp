// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listofferingsresponse.h"
#include "listofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConnect {

/*!
 * \class QtAws::MediaConnect::ListOfferingsResponse
 * \brief The ListOfferingsResponse class provides an interace for MediaConnect ListOfferings responses.
 *
 * \inmodule QtAwsMediaConnect
 *
 *
 * \sa MediaConnectClient::listOfferings
 */

/*!
 * Constructs a ListOfferingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListOfferingsResponse::ListOfferingsResponse(
        const ListOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConnectResponse(new ListOfferingsResponsePrivate(this), parent)
{
    setRequest(new ListOfferingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListOfferingsRequest * ListOfferingsResponse::request() const
{
    Q_D(const ListOfferingsResponse);
    return static_cast<const ListOfferingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConnect ListOfferings \a response.
 */
void ListOfferingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConnect::ListOfferingsResponsePrivate
 * \brief The ListOfferingsResponsePrivate class provides private implementation for ListOfferingsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConnect
 */

/*!
 * Constructs a ListOfferingsResponsePrivate object with public implementation \a q.
 */
ListOfferingsResponsePrivate::ListOfferingsResponsePrivate(
    ListOfferingsResponse * const q) : MediaConnectResponsePrivate(q)
{

}

/*!
 * Parses a MediaConnect ListOfferings response element from \a xml.
 */
void ListOfferingsResponsePrivate::parseListOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListOfferingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConnect
} // namespace QtAws
