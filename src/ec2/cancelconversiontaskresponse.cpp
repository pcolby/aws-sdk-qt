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

#include "cancelconversiontaskresponse.h"
#include "cancelconversiontaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelConversionTaskResponse
 * \brief The CancelConversionTaskResponse class provides an interace for EC2 CancelConversionTask responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::cancelConversionTask
 */

/*!
 * Constructs a CancelConversionTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelConversionTaskResponse::CancelConversionTaskResponse(
        const CancelConversionTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new CancelConversionTaskResponsePrivate(this), parent)
{
    setRequest(new CancelConversionTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelConversionTaskRequest * CancelConversionTaskResponse::request() const
{
    Q_D(const CancelConversionTaskResponse);
    return static_cast<const CancelConversionTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CancelConversionTask \a response.
 */
void CancelConversionTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelConversionTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CancelConversionTaskResponsePrivate
 * \brief The CancelConversionTaskResponsePrivate class provides private implementation for CancelConversionTaskResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelConversionTaskResponsePrivate object with public implementation \a q.
 */
CancelConversionTaskResponsePrivate::CancelConversionTaskResponsePrivate(
    CancelConversionTaskResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelConversionTask response element from \a xml.
 */
void CancelConversionTaskResponsePrivate::parseCancelConversionTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelConversionTaskResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
