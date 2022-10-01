/*
    Copyright 2013-2021 Paul Colby

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

#include "disassociateapiresponse.h"
#include "disassociateapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DisassociateApiResponse
 * \brief The DisassociateApiResponse class provides an interace for AppSync DisassociateApi responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::disassociateApi
 */

/*!
 * Constructs a DisassociateApiResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateApiResponse::DisassociateApiResponse(
        const DisassociateApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DisassociateApiResponsePrivate(this), parent)
{
    setRequest(new DisassociateApiRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateApiRequest * DisassociateApiResponse::request() const
{
    Q_D(const DisassociateApiResponse);
    return static_cast<const DisassociateApiRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DisassociateApi \a response.
 */
void DisassociateApiResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateApiResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DisassociateApiResponsePrivate
 * \brief The DisassociateApiResponsePrivate class provides private implementation for DisassociateApiResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DisassociateApiResponsePrivate object with public implementation \a q.
 */
DisassociateApiResponsePrivate::DisassociateApiResponsePrivate(
    DisassociateApiResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DisassociateApi response element from \a xml.
 */
void DisassociateApiResponsePrivate::parseDisassociateApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateApiResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
