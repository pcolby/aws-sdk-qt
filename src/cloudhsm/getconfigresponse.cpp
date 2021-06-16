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

#include "getconfigresponse.h"
#include "getconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/*!
 * \class QtAws::CloudHSM::GetConfigResponse
 * \brief The GetConfigResponse class provides an interace for CloudHSM GetConfig responses.
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
 * \sa CloudHSMClient::getConfig
 */

/*!
 * Constructs a GetConfigResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigResponse::GetConfigResponse(
        const GetConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMResponse(new GetConfigResponsePrivate(this), parent)
{
    setRequest(new GetConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigRequest * GetConfigResponse::request() const
{
    Q_D(const GetConfigResponse);
    return static_cast<const GetConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudHSM GetConfig \a response.
 */
void GetConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudHSM::GetConfigResponsePrivate
 * \brief The GetConfigResponsePrivate class provides private implementation for GetConfigResponse.
 * \internal
 *
 * \inmodule QtAwsCloudHSM
 */

/*!
 * Constructs a GetConfigResponsePrivate object with public implementation \a q.
 */
GetConfigResponsePrivate::GetConfigResponsePrivate(
    GetConfigResponse * const q) : CloudHSMResponsePrivate(q)
{

}

/*!
 * Parses a CloudHSM GetConfig response element from \a xml.
 */
void GetConfigResponsePrivate::parseGetConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudHSM
} // namespace QtAws
