// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteindexresponse.h"
#include "deleteindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteIndexResponse
 * \brief The DeleteIndexResponse class provides an interace for Kendra DeleteIndex responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteIndex
 */

/*!
 * Constructs a DeleteIndexResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIndexResponse::DeleteIndexResponse(
        const DeleteIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteIndexResponsePrivate(this), parent)
{
    setRequest(new DeleteIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIndexRequest * DeleteIndexResponse::request() const
{
    Q_D(const DeleteIndexResponse);
    return static_cast<const DeleteIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteIndex \a response.
 */
void DeleteIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteIndexResponsePrivate
 * \brief The DeleteIndexResponsePrivate class provides private implementation for DeleteIndexResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteIndexResponsePrivate object with public implementation \a q.
 */
DeleteIndexResponsePrivate::DeleteIndexResponsePrivate(
    DeleteIndexResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteIndex response element from \a xml.
 */
void DeleteIndexResponsePrivate::parseDeleteIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
