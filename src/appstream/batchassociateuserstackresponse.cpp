/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchassociateuserstackresponse.h"
#include "batchassociateuserstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::BatchAssociateUserStackResponse
 * \brief The BatchAssociateUserStackResponse class provides an interace for AppStream BatchAssociateUserStack responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::batchAssociateUserStack
 */

/*!
 * Constructs a BatchAssociateUserStackResponse object for \a reply to \a request, with parent \a parent.
 */
BatchAssociateUserStackResponse::BatchAssociateUserStackResponse(
        const BatchAssociateUserStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new BatchAssociateUserStackResponsePrivate(this), parent)
{
    setRequest(new BatchAssociateUserStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchAssociateUserStackRequest * BatchAssociateUserStackResponse::request() const
{
    Q_D(const BatchAssociateUserStackResponse);
    return static_cast<const BatchAssociateUserStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream BatchAssociateUserStack \a response.
 */
void BatchAssociateUserStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchAssociateUserStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::BatchAssociateUserStackResponsePrivate
 * \brief The BatchAssociateUserStackResponsePrivate class provides private implementation for BatchAssociateUserStackResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a BatchAssociateUserStackResponsePrivate object with public implementation \a q.
 */
BatchAssociateUserStackResponsePrivate::BatchAssociateUserStackResponsePrivate(
    BatchAssociateUserStackResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream BatchAssociateUserStack response element from \a xml.
 */
void BatchAssociateUserStackResponsePrivate::parseBatchAssociateUserStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchAssociateUserStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
