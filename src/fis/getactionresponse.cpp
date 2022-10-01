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

#include "getactionresponse.h"
#include "getactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetActionResponse
 * \brief The GetActionResponse class provides an interace for Fis GetAction responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getAction
 */

/*!
 * Constructs a GetActionResponse object for \a reply to \a request, with parent \a parent.
 */
GetActionResponse::GetActionResponse(
        const GetActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetActionResponsePrivate(this), parent)
{
    setRequest(new GetActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetActionRequest * GetActionResponse::request() const
{
    Q_D(const GetActionResponse);
    return static_cast<const GetActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetAction \a response.
 */
void GetActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetActionResponsePrivate
 * \brief The GetActionResponsePrivate class provides private implementation for GetActionResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetActionResponsePrivate object with public implementation \a q.
 */
GetActionResponsePrivate::GetActionResponsePrivate(
    GetActionResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetAction response element from \a xml.
 */
void GetActionResponsePrivate::parseGetActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
