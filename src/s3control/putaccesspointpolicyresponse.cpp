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

#include "putaccesspointpolicyresponse.h"
#include "putaccesspointpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyResponse
 * \brief The PutAccessPointPolicyResponse class provides an interace for S3Control PutAccessPointPolicy responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putAccessPointPolicy
 */

/*!
 * Constructs a PutAccessPointPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccessPointPolicyResponse::PutAccessPointPolicyResponse(
        const PutAccessPointPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutAccessPointPolicyResponsePrivate(this), parent)
{
    setRequest(new PutAccessPointPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccessPointPolicyRequest * PutAccessPointPolicyResponse::request() const
{
    return static_cast<const PutAccessPointPolicyRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control PutAccessPointPolicy \a response.
 */
void PutAccessPointPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccessPointPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutAccessPointPolicyResponsePrivate
 * \brief The PutAccessPointPolicyResponsePrivate class provides private implementation for PutAccessPointPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutAccessPointPolicyResponsePrivate object with public implementation \a q.
 */
PutAccessPointPolicyResponsePrivate::PutAccessPointPolicyResponsePrivate(
    PutAccessPointPolicyResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutAccessPointPolicy response element from \a xml.
 */
void PutAccessPointPolicyResponsePrivate::parsePutAccessPointPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccessPointPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
