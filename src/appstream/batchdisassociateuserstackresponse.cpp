/*
    Copyright 2013-2019 Paul Colby

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

#include "batchdisassociateuserstackresponse.h"
#include "batchdisassociateuserstackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::BatchDisassociateUserStackResponse
 * \brief The BatchDisassociateUserStackResponse class provides an interace for AppStream BatchDisassociateUserStack responses.
 *
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  You can use Amazon AppStream 2.0 to stream desktop applications to any device running a web browser, without rewriting
 *
 * \sa AppStreamClient::batchDisassociateUserStack
 */

/*!
 * Constructs a BatchDisassociateUserStackResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDisassociateUserStackResponse::BatchDisassociateUserStackResponse(
        const BatchDisassociateUserStackRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new BatchDisassociateUserStackResponsePrivate(this), parent)
{
    setRequest(new BatchDisassociateUserStackRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDisassociateUserStackRequest * BatchDisassociateUserStackResponse::request() const
{
    Q_D(const BatchDisassociateUserStackResponse);
    return static_cast<const BatchDisassociateUserStackRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppStream BatchDisassociateUserStack \a response.
 */
void BatchDisassociateUserStackResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDisassociateUserStackResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppStream::BatchDisassociateUserStackResponsePrivate
 * \brief The BatchDisassociateUserStackResponsePrivate class provides private implementation for BatchDisassociateUserStackResponse.
 * \internal
 *
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a BatchDisassociateUserStackResponsePrivate object with public implementation \a q.
 */
BatchDisassociateUserStackResponsePrivate::BatchDisassociateUserStackResponsePrivate(
    BatchDisassociateUserStackResponse * const q) : AppStreamResponsePrivate(q)
{

}

/*!
 * Parses a AppStream BatchDisassociateUserStack response element from \a xml.
 */
void BatchDisassociateUserStackResponsePrivate::parseBatchDisassociateUserStackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDisassociateUserStackResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppStream
} // namespace QtAws
