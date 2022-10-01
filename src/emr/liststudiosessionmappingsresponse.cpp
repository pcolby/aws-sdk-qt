// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiosessionmappingsresponse.h"
#include "liststudiosessionmappingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStudioSessionMappingsResponse
 * \brief The ListStudioSessionMappingsResponse class provides an interace for Emr ListStudioSessionMappings responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudioSessionMappings
 */

/*!
 * Constructs a ListStudioSessionMappingsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudioSessionMappingsResponse::ListStudioSessionMappingsResponse(
        const ListStudioSessionMappingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStudioSessionMappingsResponsePrivate(this), parent)
{
    setRequest(new ListStudioSessionMappingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudioSessionMappingsRequest * ListStudioSessionMappingsResponse::request() const
{
    Q_D(const ListStudioSessionMappingsResponse);
    return static_cast<const ListStudioSessionMappingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListStudioSessionMappings \a response.
 */
void ListStudioSessionMappingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudioSessionMappingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListStudioSessionMappingsResponsePrivate
 * \brief The ListStudioSessionMappingsResponsePrivate class provides private implementation for ListStudioSessionMappingsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStudioSessionMappingsResponsePrivate object with public implementation \a q.
 */
ListStudioSessionMappingsResponsePrivate::ListStudioSessionMappingsResponsePrivate(
    ListStudioSessionMappingsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListStudioSessionMappings response element from \a xml.
 */
void ListStudioSessionMappingsResponsePrivate::parseListStudioSessionMappingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudioSessionMappingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
