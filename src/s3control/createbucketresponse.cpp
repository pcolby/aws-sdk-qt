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

#include "createbucketresponse.h"
#include "createbucketresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateBucketResponse
 * \brief The CreateBucketResponse class provides an interace for S3Control CreateBucket responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createBucket
 */

/*!
 * Constructs a CreateBucketResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBucketResponse::CreateBucketResponse(
        const CreateBucketRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new CreateBucketResponsePrivate(this), parent)
{
    setRequest(new CreateBucketRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBucketRequest * CreateBucketResponse::request() const
{
    return static_cast<const CreateBucketRequest *>(S3ControlResponse::request());
}

/*!
 * \reimp
 * Parses a successful S3Control CreateBucket \a response.
 */
void CreateBucketResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBucketResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::CreateBucketResponsePrivate
 * \brief The CreateBucketResponsePrivate class provides private implementation for CreateBucketResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateBucketResponsePrivate object with public implementation \a q.
 */
CreateBucketResponsePrivate::CreateBucketResponsePrivate(
    CreateBucketResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control CreateBucket response element from \a xml.
 */
void CreateBucketResponsePrivate::parseCreateBucketResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBucketResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
