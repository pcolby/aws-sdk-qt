/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdetectorresponse.h"
#include "getdetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::GetDetectorResponse
 * \brief The GetDetectorResponse class provides an interace for GuardDuty GetDetector responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::getDetector
 */

/*!
 * Constructs a GetDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
GetDetectorResponse::GetDetectorResponse(
        const GetDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new GetDetectorResponsePrivate(this), parent)
{
    setRequest(new GetDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDetectorRequest * GetDetectorResponse::request() const
{
    Q_D(const GetDetectorResponse);
    return static_cast<const GetDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty GetDetector \a response.
 */
void GetDetectorResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::GetDetectorResponsePrivate
 * \brief The GetDetectorResponsePrivate class provides private implementation for GetDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a GetDetectorResponsePrivate object with public implementation \a q.
 */
GetDetectorResponsePrivate::GetDetectorResponsePrivate(
    GetDetectorResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty GetDetector response element from \a xml.
 */
void GetDetectorResponsePrivate::parseGetDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDetectorResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
