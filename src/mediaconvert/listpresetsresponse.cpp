// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    //Q_D(ListPresetsResponse);
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
