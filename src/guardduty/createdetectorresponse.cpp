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

#include "createdetectorresponse.h"
#include "createdetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/*!
 * \class QtAws::GuardDuty::CreateDetectorResponse
 * \brief The CreateDetectorResponse class provides an interace for GuardDuty CreateDetector responses.
 *
 * \inmodule QtAwsGuardDuty
 *
 *
 * \sa GuardDutyClient::createDetector
 */

/*!
 * Constructs a CreateDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDetectorResponse::CreateDetectorResponse(
        const CreateDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new CreateDetectorResponsePrivate(this), parent)
{
    setRequest(new CreateDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDetectorRequest * CreateDetectorResponse::request() const
{
    Q_D(const CreateDetectorResponse);
    return static_cast<const CreateDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GuardDuty CreateDetector \a response.
 */
void CreateDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GuardDuty::CreateDetectorResponsePrivate
 * \brief The CreateDetectorResponsePrivate class provides private implementation for CreateDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsGuardDuty
 */

/*!
 * Constructs a CreateDetectorResponsePrivate object with public implementation \a q.
 */
CreateDetectorResponsePrivate::CreateDetectorResponsePrivate(
    CreateDetectorResponse * const q) : GuardDutyResponsePrivate(q)
{

}

/*!
 * Parses a GuardDuty CreateDetector response element from \a xml.
 */
void CreateDetectorResponsePrivate::parseCreateDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDetectorResponse"));
    /// @todo
}

} // namespace GuardDuty
} // namespace QtAws
