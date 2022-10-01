// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchjobdefinitionsresponse.h"
#include "listbatchjobdefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListBatchJobDefinitionsResponse
 * \brief The ListBatchJobDefinitionsResponse class provides an interace for M2 ListBatchJobDefinitions responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listBatchJobDefinitions
 */

/*!
 * Constructs a ListBatchJobDefinitionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListBatchJobDefinitionsResponse::ListBatchJobDefinitionsResponse(
        const ListBatchJobDefinitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListBatchJobDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListBatchJobDefinitionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListBatchJobDefinitionsRequest * ListBatchJobDefinitionsResponse::request() const
{
    Q_D(const ListBatchJobDefinitionsResponse);
    return static_cast<const ListBatchJobDefinitionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListBatchJobDefinitions \a response.
 */
void ListBatchJobDefinitionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListBatchJobDefinitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListBatchJobDefinitionsResponsePrivate
 * \brief The ListBatchJobDefinitionsResponsePrivate class provides private implementation for ListBatchJobDefinitionsResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListBatchJobDefinitionsResponsePrivate object with public implementation \a q.
 */
ListBatchJobDefinitionsResponsePrivate::ListBatchJobDefinitionsResponsePrivate(
    ListBatchJobDefinitionsResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListBatchJobDefinitions response element from \a xml.
 */
void ListBatchJobDefinitionsResponsePrivate::parseListBatchJobDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBatchJobDefinitionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
