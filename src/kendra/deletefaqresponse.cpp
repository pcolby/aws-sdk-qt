// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefaqresponse.h"
#include "deletefaqresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteFaqResponse
 * \brief The DeleteFaqResponse class provides an interace for Kendra DeleteFaq responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteFaq
 */

/*!
 * Constructs a DeleteFaqResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFaqResponse::DeleteFaqResponse(
        const DeleteFaqRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteFaqResponsePrivate(this), parent)
{
    setRequest(new DeleteFaqRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFaqRequest * DeleteFaqResponse::request() const
{
    Q_D(const DeleteFaqResponse);
    return static_cast<const DeleteFaqRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteFaq \a response.
 */
void DeleteFaqResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFaqResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteFaqResponsePrivate
 * \brief The DeleteFaqResponsePrivate class provides private implementation for DeleteFaqResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteFaqResponsePrivate object with public implementation \a q.
 */
DeleteFaqResponsePrivate::DeleteFaqResponsePrivate(
    DeleteFaqResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteFaq response element from \a xml.
 */
void DeleteFaqResponsePrivate::parseDeleteFaqResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFaqResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
