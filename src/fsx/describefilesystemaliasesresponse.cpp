// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefilesystemaliasesresponse.h"
#include "describefilesystemaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesResponse
 * \brief The DescribeFileSystemAliasesResponse class provides an interace for FSx DescribeFileSystemAliases responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeFileSystemAliases
 */

/*!
 * Constructs a DescribeFileSystemAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFileSystemAliasesResponse::DescribeFileSystemAliasesResponse(
        const DescribeFileSystemAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeFileSystemAliasesResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFileSystemAliasesRequest * DescribeFileSystemAliasesResponse::request() const
{
    Q_D(const DescribeFileSystemAliasesResponse);
    return static_cast<const DescribeFileSystemAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeFileSystemAliases \a response.
 */
void DescribeFileSystemAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFileSystemAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeFileSystemAliasesResponsePrivate
 * \brief The DescribeFileSystemAliasesResponsePrivate class provides private implementation for DescribeFileSystemAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeFileSystemAliasesResponsePrivate object with public implementation \a q.
 */
DescribeFileSystemAliasesResponsePrivate::DescribeFileSystemAliasesResponsePrivate(
    DescribeFileSystemAliasesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeFileSystemAliases response element from \a xml.
 */
void DescribeFileSystemAliasesResponsePrivate::parseDescribeFileSystemAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
