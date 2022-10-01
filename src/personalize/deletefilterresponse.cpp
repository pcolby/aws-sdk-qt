// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilterresponse.h"
#include "deletefilterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteFilterResponse
 * \brief The DeleteFilterResponse class provides an interace for Personalize DeleteFilter responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteFilter
 */

/*!
 * Constructs a DeleteFilterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFilterResponse::DeleteFilterResponse(
        const DeleteFilterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DeleteFilterResponsePrivate(this), parent)
{
    setRequest(new DeleteFilterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFilterRequest * DeleteFilterResponse::request() const
{
    Q_D(const DeleteFilterResponse);
    return static_cast<const DeleteFilterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DeleteFilter \a response.
 */
void DeleteFilterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFilterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DeleteFilterResponsePrivate
 * \brief The DeleteFilterResponsePrivate class provides private implementation for DeleteFilterResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteFilterResponsePrivate object with public implementation \a q.
 */
DeleteFilterResponsePrivate::DeleteFilterResponsePrivate(
    DeleteFilterResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DeleteFilter response element from \a xml.
 */
void DeleteFilterResponsePrivate::parseDeleteFilterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFilterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws
