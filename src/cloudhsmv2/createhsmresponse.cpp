/*
    Copyright 2013-2020 Paul Colby

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

#include "createhsmresponse.h"
#include "createhsmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/*!
 * \class QtAws::CloudHSMV2::CreateHsmResponse
 * \brief The CreateHsmResponse class provides an interace for CloudHSMV2 CreateHsm responses.
 *
 * \inmodule QtAwsCloudHSMV2
 *
 *  For more information about AWS CloudHSM, see <a href="http://aws.amazon.com/cloudhsm/">AWS CloudHSM</a> and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User
 *
 * \sa CloudHSMV2Client::createHsm
 */

/*!
 * Constructs a CreateHsmResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHsmResponse::CreateHsmResponse(
        const CreateHsmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new CreateHsmResponsePrivate(this), parent)
{
    setRequest(new CreateHsmRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHsmRequest * CreateHsmResponse::request() const
{
    Q_D(const CreateHsmResponse);
    return static_cast<const CreateHsmRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSMV2 CreateHsm \a response.
 */
void CreateHsmResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHsmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSMV2::CreateHsmResponsePrivate
 * \brief The CreateHsmResponsePrivate class provides private implementation for CreateHsmResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSMV2
 */

/*!
 * Constructs a CreateHsmResponsePrivate object with public implementation \a q.
 */
CreateHsmResponsePrivate::CreateHsmResponsePrivate(
    CreateHsmResponse * const q) : CloudHSMV2ResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSMV2 CreateHsm response element from \a xml.
 */
void CreateHsmResponsePrivate::parseCreateHsmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHsmResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
