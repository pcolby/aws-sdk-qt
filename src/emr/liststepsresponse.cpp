// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststepsresponse.h"
#include "liststepsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ListStepsResponse
 * \brief The ListStepsResponse class provides an interace for Emr ListSteps responses.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::listSteps
 */

/*!
 * Constructs a ListStepsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStepsResponse::ListStepsResponse(
        const ListStepsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new ListStepsResponsePrivate(this), parent)
{
    setRequest(new ListStepsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStepsRequest * ListStepsResponse::request() const
{
    Q_D(const ListStepsResponse);
    return static_cast<const ListStepsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Emr ListSteps \a response.
 */
void ListStepsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStepsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Emr::ListStepsResponsePrivate
 * \brief The ListStepsResponsePrivate class provides private implementation for ListStepsResponse.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ListStepsResponsePrivate object with public implementation \a q.
 */
ListStepsResponsePrivate::ListStepsResponsePrivate(
    ListStepsResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a Emr ListSteps response element from \a xml.
 */
void ListStepsResponsePrivate::parseListStepsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStepsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Emr
} // namespace QtAws
