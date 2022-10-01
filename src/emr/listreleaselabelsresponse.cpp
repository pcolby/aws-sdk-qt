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

#include "listreleaselabelsresponse.h"
#include "listreleaselabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListReleaseLabelsResponse
 * \brief The ListReleaseLabelsResponse class provides an interace for Emr ListReleaseLabels responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listReleaseLabels
 */

/*!
 * Constructs a ListReleaseLabelsResponse object for \a reply to \a request, with parent \a parent.
 */
ListReleaseLabelsResponse::ListReleaseLabelsResponse(
        const ListReleaseLabelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListReleaseLabelsResponsePrivate(this), parent)
{
    setRequest(new ListReleaseLabelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListReleaseLabelsRequest * ListReleaseLabelsResponse::request() const
{
    Q_D(const ListReleaseLabelsResponse);
    return static_cast<const ListReleaseLabelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListReleaseLabels \a response.
 */
void ListReleaseLabelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListReleaseLabelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListReleaseLabelsResponsePrivate
 * \brief The ListReleaseLabelsResponsePrivate class provides private implementation for ListReleaseLabelsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListReleaseLabelsResponsePrivate object with public implementation \a q.
 */
ListReleaseLabelsResponsePrivate::ListReleaseLabelsResponsePrivate(
    ListReleaseLabelsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListReleaseLabels response element from \a xml.
 */
void ListReleaseLabelsResponsePrivate::parseListReleaseLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListReleaseLabelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
