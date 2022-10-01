// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontainerresponse.h"
#include "describecontainerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::DescribeContainerResponse
 * \brief The DescribeContainerResponse class provides an interace for MediaStore DescribeContainer responses.
 *
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 *
 * \sa MediaStoreClient::describeContainer
 */

/*!
 * Constructs a DescribeContainerResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeContainerResponse::DescribeContainerResponse(
        const DescribeContainerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new DescribeContainerResponsePrivate(this), parent)
{
    setRequest(new DescribeContainerRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeContainerRequest * DescribeContainerResponse::request() const
{
    Q_D(const DescribeContainerResponse);
    return static_cast<const DescribeContainerRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaStore DescribeContainer \a response.
 */
void DescribeContainerResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeContainerResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaStore::DescribeContainerResponsePrivate
 * \brief The DescribeContainerResponsePrivate class provides private implementation for DescribeContainerResponse.
 * \internal
 *
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a DescribeContainerResponsePrivate object with public implementation \a q.
 */
DescribeContainerResponsePrivate::DescribeContainerResponsePrivate(
    DescribeContainerResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/*!
 * Parses a MediaStore DescribeContainer response element from \a xml.
 */
void DescribeContainerResponsePrivate::parseDescribeContainerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContainerResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaStore
} // namespace QtAws
