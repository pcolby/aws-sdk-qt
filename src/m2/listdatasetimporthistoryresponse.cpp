// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetimporthistoryresponse.h"
#include "listdatasetimporthistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDataSetImportHistoryResponse
 * \brief The ListDataSetImportHistoryResponse class provides an interace for M2 ListDataSetImportHistory responses.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDataSetImportHistory
 */

/*!
 * Constructs a ListDataSetImportHistoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListDataSetImportHistoryResponse::ListDataSetImportHistoryResponse(
        const ListDataSetImportHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : M2Response(new ListDataSetImportHistoryResponsePrivate(this), parent)
{
    setRequest(new ListDataSetImportHistoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDataSetImportHistoryRequest * ListDataSetImportHistoryResponse::request() const
{
    Q_D(const ListDataSetImportHistoryResponse);
    return static_cast<const ListDataSetImportHistoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful M2 ListDataSetImportHistory \a response.
 */
void ListDataSetImportHistoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDataSetImportHistoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::M2::ListDataSetImportHistoryResponsePrivate
 * \brief The ListDataSetImportHistoryResponsePrivate class provides private implementation for ListDataSetImportHistoryResponse.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDataSetImportHistoryResponsePrivate object with public implementation \a q.
 */
ListDataSetImportHistoryResponsePrivate::ListDataSetImportHistoryResponsePrivate(
    ListDataSetImportHistoryResponse * const q) : M2ResponsePrivate(q)
{

}

/*!
 * Parses a M2 ListDataSetImportHistory response element from \a xml.
 */
void ListDataSetImportHistoryResponsePrivate::parseListDataSetImportHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDataSetImportHistoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace M2
} // namespace QtAws
