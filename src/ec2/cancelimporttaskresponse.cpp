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

#include "cancelimporttaskresponse.h"
#include "cancelimporttaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::CancelImportTaskResponse
 * \brief The CancelImportTaskResponse class provides an interace for EC2 CancelImportTask responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::cancelImportTask
 */

/*!
 * Constructs a CancelImportTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelImportTaskResponse::CancelImportTaskResponse(
        const CancelImportTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new CancelImportTaskResponsePrivate(this), parent)
{
    setRequest(new CancelImportTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelImportTaskRequest * CancelImportTaskResponse::request() const
{
    Q_D(const CancelImportTaskResponse);
    return static_cast<const CancelImportTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 CancelImportTask \a response.
 */
void CancelImportTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelImportTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::CancelImportTaskResponsePrivate
 * \brief The CancelImportTaskResponsePrivate class provides private implementation for CancelImportTaskResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a CancelImportTaskResponsePrivate object with public implementation \a q.
 */
CancelImportTaskResponsePrivate::CancelImportTaskResponsePrivate(
    CancelImportTaskResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 CancelImportTask response element from \a xml.
 */
void CancelImportTaskResponsePrivate::parseCancelImportTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelImportTaskResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
