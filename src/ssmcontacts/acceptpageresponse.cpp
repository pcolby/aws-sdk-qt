/*
    Copyright 2013-2021 Paul Colby

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

#include "acceptpageresponse.h"
#include "acceptpageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::AcceptPageResponse
 * \brief The AcceptPageResponse class provides an interace for SSMContacts AcceptPage responses.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::acceptPage
 */

/*!
 * Constructs a AcceptPageResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptPageResponse::AcceptPageResponse(
        const AcceptPageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMContactsResponse(new AcceptPageResponsePrivate(this), parent)
{
    setRequest(new AcceptPageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptPageRequest * AcceptPageResponse::request() const
{
    Q_D(const AcceptPageResponse);
    return static_cast<const AcceptPageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SSMContacts AcceptPage \a response.
 */
void AcceptPageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptPageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SSMContacts::AcceptPageResponsePrivate
 * \brief The AcceptPageResponsePrivate class provides private implementation for AcceptPageResponse.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a AcceptPageResponsePrivate object with public implementation \a q.
 */
AcceptPageResponsePrivate::AcceptPageResponsePrivate(
    AcceptPageResponse * const q) : SSMContactsResponsePrivate(q)
{

}

/*!
 * Parses a SSMContacts AcceptPage response element from \a xml.
 */
void AcceptPageResponsePrivate::parseAcceptPageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptPageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SSMContacts
} // namespace QtAws
