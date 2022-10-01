// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateindexresponse.h"
#include "updateindexresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateIndexResponse
 * \brief The UpdateIndexResponse class provides an interace for Kendra UpdateIndex responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateIndex
 */

/*!
 * Constructs a UpdateIndexResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateIndexResponse::UpdateIndexResponse(
        const UpdateIndexRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateIndexResponsePrivate(this), parent)
{
    setRequest(new UpdateIndexRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateIndexRequest * UpdateIndexResponse::request() const
{
    Q_D(const UpdateIndexResponse);
    return static_cast<const UpdateIndexRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateIndex \a response.
 */
void UpdateIndexResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateIndexResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateIndexResponsePrivate
 * \brief The UpdateIndexResponsePrivate class provides private implementation for UpdateIndexResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateIndexResponsePrivate object with public implementation \a q.
 */
UpdateIndexResponsePrivate::UpdateIndexResponsePrivate(
    UpdateIndexResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateIndex response element from \a xml.
 */
void UpdateIndexResponsePrivate::parseUpdateIndexResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateIndexResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
