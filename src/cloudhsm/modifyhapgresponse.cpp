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

#include "modifyhapgresponse.h"
#include "modifyhapgresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyHapgResponse
 * \brief The ModifyHapgResponse class provides an interace for CloudHSM ModifyHapg responses.
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
 * \sa CloudHSMClient::modifyHapg
 */

/*!
 * Constructs a ModifyHapgResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyHapgResponse::ModifyHapgResponse(
        const ModifyHapgRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyHapgResponsePrivate(this), parent)
{
    setRequest(new ModifyHapgRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyHapgRequest * ModifyHapgResponse::request() const
{
    Q_D(const ModifyHapgResponse);
    return static_cast<const ModifyHapgRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM ModifyHapg \a response.
 */
void ModifyHapgResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyHapgResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::ModifyHapgResponsePrivate
 * \brief The ModifyHapgResponsePrivate class provides private implementation for ModifyHapgResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a ModifyHapgResponsePrivate object with public implementation \a q.
 */
ModifyHapgResponsePrivate::ModifyHapgResponsePrivate(
    ModifyHapgResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM ModifyHapg response element from \a xml.
 */
void ModifyHapgResponsePrivate::parseModifyHapgResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyHapgResponse"));
    /// @todo
}

} // namespace CloudHSM
} // namespace QtAws
