// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobtemplatesresponse.h"
#include "listjobtemplatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListJobTemplatesResponse
 * \brief The ListJobTemplatesResponse class provides an interace for MediaConvert ListJobTemplates responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listJobTemplates
 */

/*!
 * Constructs a ListJobTemplatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListJobTemplatesResponse::ListJobTemplatesResponse(
        const ListJobTemplatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListJobTemplatesResponsePrivate(this), parent)
{
    setRequest(new ListJobTemplatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListJobTemplatesRequest * ListJobTemplatesResponse::request() const
{
    Q_D(const ListJobTemplatesResponse);
    return static_cast<const ListJobTemplatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListJobTemplates \a response.
 */
void ListJobTemplatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListJobTemplatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListJobTemplatesResponsePrivate
 * \brief The ListJobTemplatesResponsePrivate class provides private implementation for ListJobTemplatesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListJobTemplatesResponsePrivate object with public implementation \a q.
 */
ListJobTemplatesResponsePrivate::ListJobTemplatesResponsePrivate(
    ListJobTemplatesResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListJobTemplates response element from \a xml.
 */
void ListJobTemplatesResponsePrivate::parseListJobTemplatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobTemplatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
