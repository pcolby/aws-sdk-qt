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

#include "describebackupsresponse.h"
#include "describebackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeBackupsResponse
 * \brief The DescribeBackupsResponse class provides an interace for FSx DescribeBackups responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeBackups
 */

/*!
 * Constructs a DescribeBackupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBackupsResponse::DescribeBackupsResponse(
        const DescribeBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeBackupsResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBackupsRequest * DescribeBackupsResponse::request() const
{
    Q_D(const DescribeBackupsResponse);
    return static_cast<const DescribeBackupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeBackups \a response.
 */
void DescribeBackupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBackupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeBackupsResponsePrivate
 * \brief The DescribeBackupsResponsePrivate class provides private implementation for DescribeBackupsResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeBackupsResponsePrivate object with public implementation \a q.
 */
DescribeBackupsResponsePrivate::DescribeBackupsResponsePrivate(
    DescribeBackupsResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeBackups response element from \a xml.
 */
void DescribeBackupsResponsePrivate::parseDescribeBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
