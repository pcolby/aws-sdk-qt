// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchdevicesresponse.h"
#include "searchdevicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Braket {

/*!
 * \class QtAws::Braket::SearchDevicesResponse
 * \brief The SearchDevicesResponse class provides an interace for Braket SearchDevices responses.
 *
 * \inmodule QtAwsBraket
 *
 *  The Amazon Braket API Reference provides information about the operations and structures supported in Amazon
 * 
 *  Braket>
 * 
 *  Additional
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/braket/latest/developerguide/what-is-braket.html">Amazon Braket Developer Guide</a>
 *
 * \sa BraketClient::searchDevices
 */

/*!
 * Constructs a SearchDevicesResponse object for \a reply to \a request, with parent \a parent.
 */
SearchDevicesResponse::SearchDevicesResponse(
        const SearchDevicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BraketResponse(new SearchDevicesResponsePrivate(this), parent)
{
    setRequest(new SearchDevicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchDevicesRequest * SearchDevicesResponse::request() const
{
    Q_D(const SearchDevicesResponse);
    return static_cast<const SearchDevicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Braket SearchDevices \a response.
 */
void SearchDevicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchDevicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Braket::SearchDevicesResponsePrivate
 * \brief The SearchDevicesResponsePrivate class provides private implementation for SearchDevicesResponse.
 * \internal
 *
 * \inmodule QtAwsBraket
 */

/*!
 * Constructs a SearchDevicesResponsePrivate object with public implementation \a q.
 */
SearchDevicesResponsePrivate::SearchDevicesResponsePrivate(
    SearchDevicesResponse * const q) : BraketResponsePrivate(q)
{

}

/*!
 * Parses a Braket SearchDevices response element from \a xml.
 */
void SearchDevicesResponsePrivate::parseSearchDevicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchDevicesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Braket
} // namespace QtAws
