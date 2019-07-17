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

#include "modifylunaclientresponse.h"
#include "modifylunaclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::ModifyLunaClientResponse
 * \brief The ModifyLunaClientResponse class provides an interace for CloudHSM ModifyLunaClient responses.
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
 * \sa CloudHSMClient::modifyLunaClient
 */

/*!
 * Constructs a ModifyLunaClientResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyLunaClientResponse::ModifyLunaClientResponse(
        const ModifyLunaClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new ModifyLunaClientResponsePrivate(this), parent)
{
    setRequest(new ModifyLunaClientRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyLunaClientRequest * ModifyLunaClientResponse::request() const
{
    Q_D(const ModifyLunaClientResponse);
    return static_cast<const ModifyLunaClientRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM ModifyLunaClient \a response.
 */
void ModifyLunaClientResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyLunaClientResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::ModifyLunaClientResponsePrivate
 * \brief The ModifyLunaClientResponsePrivate class provides private implementation for ModifyLunaClientResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a ModifyLunaClientResponsePrivate object with public implementation \a q.
 */
ModifyLunaClientResponsePrivate::ModifyLunaClientResponsePrivate(
    ModifyLunaClientResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM ModifyLunaClient response element from \a xml.
 */
void ModifyLunaClientResponsePrivate::parseModifyLunaClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLunaClientResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSM
} // namespace QtAws
