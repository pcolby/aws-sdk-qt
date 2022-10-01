// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemsresponse.h"
#include "describefilesystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemsResponse
 * \brief The DescribeFileSystemsResponse class provides an interace for FSx DescribeFileSystems responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystems
 */

/*!
 * Constructs a DescribeFileSystemsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemsResponse::DescribeFileSystemsResponse(
        const DescribeFileSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeFileSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemsRequest * DescribeFileSystemsResponse::request() const
{
    Q_D(const DescribeFileSystemsResponse);
    return static_cast<const DescribeFileSystemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeFileSystems \a response.
 */
void DescribeFileSystemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeFileSystemsResponsePrivate
 * \brief The DescribeFileSystemsResponsePrivate class provides private implementation for DescribeFileSystemsResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemsResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponsePrivate(
    DescribeFileSystemsResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeFileSystems response element from \a xml.
 */
void DescribeFileSystemsResponsePrivate::parseDescribeFileSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
