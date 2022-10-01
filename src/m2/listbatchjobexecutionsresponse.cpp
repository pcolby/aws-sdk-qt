// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchjobexecutionsresponse.h"
#include "listbatchjobexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListBatchJobExecutionsResponse
 * \brief The ListBatchJobExecutionsResponse class provides an interace for M2 ListBatchJobExecutions responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listBatchJobExecutions
 */

/*!
 * Constructs a ListBatchJobExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBatchJobExecutionsResponse::ListBatchJobExecutionsResponse(
        const ListBatchJobExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListBatchJobExecutionsResponsePrivate(this), parent)
{
    setRequest(new ListBatchJobExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBatchJobExecutionsRequest * ListBatchJobExecutionsResponse::request() const
{
    Q_D(const ListBatchJobExecutionsResponse);
    return static_cast<const ListBatchJobExecutionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListBatchJobExecutions \a response.
 */
void ListBatchJobExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBatchJobExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListBatchJobExecutionsResponsePrivate
 * \brief The ListBatchJobExecutionsResponsePrivate class provides private implementation for ListBatchJobExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListBatchJobExecutionsResponsePrivate object with public implementation \a q.
 */
ListBatchJobExecutionsResponsePrivate::ListBatchJobExecutionsResponsePrivate(
    ListBatchJobExecutionsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListBatchJobExecutions response element from \a xml.
 */
void ListBatchJobExecutionsResponsePrivate::parseListBatchJobExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBatchJobExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
