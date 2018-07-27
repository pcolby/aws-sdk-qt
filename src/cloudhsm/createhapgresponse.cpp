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

#include "createhapgresponse.h"
#include "createhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::CreateHapgResponse
 * \brief The CreateHapgResponse class provides an interace for CloudHSM CreateHapg responses.
 *
 * \inmodule QtAwsCloudHSM
 *
 *  <fullname>AWS CloudHSM Service</fullname>
 * 
 *  This is documentation for <b>AWS CloudHSM Classic</b>. For more information, see <a
 *  href="http://aws.amazon.com/cloudhsm/faqs-classic/">AWS CloudHSM Classic FAQs</a>, the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/userguide/">AWS CloudHSM Classic User Guide</a>, and the <a
 *  href="http://docs.aws.amazon.com/cloudhsm/classic/APIReference/">AWS CloudHSM Classic API
 * 
 *  Reference</a>>
 * 
 *  <b>For information about the current version of AWS CloudHSM</b>, see <a href="http://aws.amazon.com/cloudhsm/">AWS
 *  CloudHSM</a>, the <a href="http://docs.aws.amazon.com/cloudhsm/latest/userguide/">AWS CloudHSM User Guide</a>, and the
 *  <a href="http://docs.aws.amazon.com/cloudhsm/latest/APIReference/">AWS CloudHSM API
 *
 * \sa CloudHSMClient::createHapg
 */

/*!
 * Constructs a CreateHapgResponse object for \a reply to \a request, with parent \a parent.
 */
CreateHapgResponse::CreateHapgResponse(
        const CreateHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new CreateHapgResponsePrivate(this), parent)
{
    setRequest(new CreateHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateHapgRequest * CreateHapgResponse::request() const
{
    Q_D(const CreateHapgResponse);
    return static_cast<const CreateHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM CreateHapg \a response.
 */
void CreateHapgResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::CreateHapgResponsePrivate
 * \brief The CreateHapgResponsePrivate class provides private implementation for CreateHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a CreateHapgResponsePrivate object with public implementation \a q.
 */
CreateHapgResponsePrivate::CreateHapgResponsePrivate(
    CreateHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM CreateHapg response element from \a xml.
 */
void CreateHapgResponsePrivate::parseCreateHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateHapgResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSM
} // namespace QtAws
