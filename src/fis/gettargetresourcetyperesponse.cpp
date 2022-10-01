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

#include "gettargetresourcetyperesponse.h"
#include "gettargetresourcetyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Fis {

/*!
 * \class QtAws::Fis::GetTargetResourceTypeResponse
 * \brief The GetTargetResourceTypeResponse class provides an interace for Fis GetTargetResourceType responses.
 *
 * \inmodule QtAwsFis
 *
 *  Fault Injection Simulator is a managed service that enables you to perform fault injection experiments on your Amazon
 *  Web Services workloads. For more information, see the <a href="https://docs.aws.amazon.com/fis/latest/userguide/">Fault
 *  Injection Simulator User
 *
 * \sa FisClient::getTargetResourceType
 */

/*!
 * Constructs a GetTargetResourceTypeResponse object for \a reply to \a request, with parent \a parent.
 */
GetTargetResourceTypeResponse::GetTargetResourceTypeResponse(
        const GetTargetResourceTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FisResponse(new GetTargetResourceTypeResponsePrivate(this), parent)
{
    setRequest(new GetTargetResourceTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTargetResourceTypeRequest * GetTargetResourceTypeResponse::request() const
{
    Q_D(const GetTargetResourceTypeResponse);
    return static_cast<const GetTargetResourceTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Fis GetTargetResourceType \a response.
 */
void GetTargetResourceTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTargetResourceTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Fis::GetTargetResourceTypeResponsePrivate
 * \brief The GetTargetResourceTypeResponsePrivate class provides private implementation for GetTargetResourceTypeResponse.
 * \internal
 *
 * \inmodule QtAwsFis
 */

/*!
 * Constructs a GetTargetResourceTypeResponsePrivate object with public implementation \a q.
 */
GetTargetResourceTypeResponsePrivate::GetTargetResourceTypeResponsePrivate(
    GetTargetResourceTypeResponse * const q) : FisResponsePrivate(q)
{

}

/*!
 * Parses a Fis GetTargetResourceType response element from \a xml.
 */
void GetTargetResourceTypeResponsePrivate::parseGetTargetResourceTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTargetResourceTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Fis
} // namespace QtAws
