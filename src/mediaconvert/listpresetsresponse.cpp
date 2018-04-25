/*
    Copyright 2013-2018 Paul Colby

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

#include "listpresetsresponse.h"
#include "listpresetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListPresetsResponse
 * \brief The ListPresetsResponse class provides an interace for MediaConvert ListPresets responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listPresets
 */

/*!
 * Constructs a ListPresetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListPresetsResponse::ListPresetsResponse(
        const ListPresetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListPresetsResponsePrivate(this), parent)
{
    setRequest(new ListPresetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListPresetsRequest * ListPresetsResponse::request() const
{
    Q_D(const ListPresetsResponse);
    return static_cast<const ListPresetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListPresets \a response.
 */
void ListPresetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPresetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListPresetsResponsePrivate
 * \brief The ListPresetsResponsePrivate class provides private implementation for ListPresetsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListPresetsResponsePrivate object with public implementation \a q.
 */
ListPresetsResponsePrivate::ListPresetsResponsePrivate(
    ListPresetsResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListPresets response element from \a xml.
 */
void ListPresetsResponsePrivate::parseListPresetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPresetsResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
