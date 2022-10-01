// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiosresponse.h"
#include "liststudiosresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStudiosResponse
 * \brief The ListStudiosResponse class provides an interace for Emr ListStudios responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listStudios
 */

/*!
 * Constructs a ListStudiosResponse object for \a reply to \a request, with parent \a parent.
 */
ListStudiosResponse::ListStudiosResponse(
        const ListStudiosRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStudiosResponsePrivate(this), parent)
{
    setRequest(new ListStudiosRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStudiosRequest * ListStudiosResponse::request() const
{
    Q_D(const ListStudiosResponse);
    return static_cast<const ListStudiosRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListStudios \a response.
 */
void ListStudiosResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStudiosResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListStudiosResponsePrivate
 * \brief The ListStudiosResponsePrivate class provides private implementation for ListStudiosResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStudiosResponsePrivate object with public implementation \a q.
 */
ListStudiosResponsePrivate::ListStudiosResponsePrivate(
    ListStudiosResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListStudios response element from \a xml.
 */
void ListStudiosResponsePrivate::parseListStudiosResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStudiosResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
