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

#include "lists3resourcesresponse.h"
#include "lists3resourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Macie {

/*!
 * \class QtAws::Macie::ListS3ResourcesResponse
 * \brief The ListS3ResourcesResponse class provides an interace for Macie ListS3Resources responses.
 *
 * \inmodule QtAwsMacie
 *
 *  <fullname>Amazon Macie</fullname>
 * 
 *  Amazon Macie is a security service that uses machine learning to automatically discover, classify, and protect sensitive
 *  data in AWS. Macie recognizes sensitive data such as personally identifiable information (PII) or intellectual property,
 *  and provides you with dashboards and alerts that give visibility into how this data is being accessed or moved. For more
 *  information, see the <a href="https://docs.aws.amazon.com/macie/latest/userguide/what-is-macie.html">Macie User
 *  Guide</a>.
 *
 * \sa MacieClient::listS3Resources
 */

/*!
 * Constructs a ListS3ResourcesResponse object for \a reply to \a request, with parent \a parent.
 */
ListS3ResourcesResponse::ListS3ResourcesResponse(
        const ListS3ResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MacieResponse(new ListS3ResourcesResponsePrivate(this), parent)
{
    setRequest(new ListS3ResourcesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListS3ResourcesRequest * ListS3ResourcesResponse::request() const
{
    Q_D(const ListS3ResourcesResponse);
    return static_cast<const ListS3ResourcesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Macie ListS3Resources \a response.
 */
void ListS3ResourcesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListS3ResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Macie::ListS3ResourcesResponsePrivate
 * \brief The ListS3ResourcesResponsePrivate class provides private implementation for ListS3ResourcesResponse.
 * \internal
 *
 * \inmodule QtAwsMacie
 */

/*!
 * Constructs a ListS3ResourcesResponsePrivate object with public implementation \a q.
 */
ListS3ResourcesResponsePrivate::ListS3ResourcesResponsePrivate(
    ListS3ResourcesResponse * const q) : MacieResponsePrivate(q)
{

}

/*!
 * Parses a Macie ListS3Resources response element from \a xml.
 */
void ListS3ResourcesResponsePrivate::parseListS3ResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListS3ResourcesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Macie
} // namespace QtAws
