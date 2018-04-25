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

#include "attachvolumeresponse.h"
#include "attachvolumeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AttachVolumeResponse
 * \brief The AttachVolumeResponse class provides an interace for EC2 AttachVolume responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::attachVolume
 */

/*!
 * Constructs a AttachVolumeResponse object for \a reply to \a request, with parent \a parent.
 */
AttachVolumeResponse::AttachVolumeResponse(
        const AttachVolumeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AttachVolumeResponsePrivate(this), parent)
{
    setRequest(new AttachVolumeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AttachVolumeRequest * AttachVolumeResponse::request() const
{
    Q_D(const AttachVolumeResponse);
    return static_cast<const AttachVolumeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 AttachVolume \a response.
 */
void AttachVolumeResponse::parseSuccess(QIODevice &response)
{
    Q_D(AttachVolumeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AttachVolumeResponsePrivate
 * \brief The AttachVolumeResponsePrivate class provides private implementation for AttachVolumeResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AttachVolumeResponsePrivate object with public implementation \a q.
 */
AttachVolumeResponsePrivate::AttachVolumeResponsePrivate(
    AttachVolumeResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AttachVolume response element from \a xml.
 */
void AttachVolumeResponsePrivate::parseAttachVolumeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachVolumeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
