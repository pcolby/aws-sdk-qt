// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createindexresponse.h"
#include "createindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateIndexResponse
 * \brief The CreateIndexResponse class provides an interace for Kendra CreateIndex responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createIndex
 */

/*!
 * Constructs a CreateIndexResponse object for \a reply to \a request, with parent \a parent.
 */
CreateIndexResponse::CreateIndexResponse(
        const CreateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new CreateIndexResponsePrivate(this), parent)
{
    setRequest(new CreateIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateIndexRequest * CreateIndexResponse::request() const
{
    Q_D(const CreateIndexResponse);
    return static_cast<const CreateIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra CreateIndex \a response.
 */
void CreateIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::CreateIndexResponsePrivate
 * \brief The CreateIndexResponsePrivate class provides private implementation for CreateIndexResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateIndexResponsePrivate object with public implementation \a q.
 */
CreateIndexResponsePrivate::CreateIndexResponsePrivate(
    CreateIndexResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra CreateIndex response element from \a xml.
 */
void CreateIndexResponsePrivate::parseCreateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
