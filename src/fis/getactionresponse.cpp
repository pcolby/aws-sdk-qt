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
namespace FIS {

/*!
 * \class QtAws::FIS::GetActionResponse
 * \brief The GetActionResponse class provides an interace for FIS GetAction responses.
 *
 * \inmodule QtAwsFIS
 *
 *  AWS Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your AWS
 *  workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">AWS Fault Injection
 *  Simulator User
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
    return static_cast<const GetActionRequest *>(FisResponse::request());
}

/*!
 * \reimp
 * Parses a successful FIS GetAction \a response.
 */
void GetActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FIS::GetActionResponsePrivate
 * \brief The GetActionResponsePrivate class provides private implementation for GetActionResponse.
 * \internal
 *
 * \inmodule QtAwsFIS
 */

/*!
 * Constructs a GetActionResponsePrivate object with public implementation \a q.
 */
GetActionResponsePrivate::GetActionResponsePrivate(
    GetActionResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a FIS GetAction response element from \a xml.
 */
void GetActionResponsePrivate::parseGetActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FIS
} // namespace QtAws
