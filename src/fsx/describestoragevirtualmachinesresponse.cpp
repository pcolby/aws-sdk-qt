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

#include "describestoragevirtualmachinesresponse.h"
#include "describestoragevirtualmachinesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeStorageVirtualMachinesResponse
 * \brief The DescribeStorageVirtualMachinesResponse class provides an interace for FSx DescribeStorageVirtualMachines responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeStorageVirtualMachines
 */

/*!
 * Constructs a DescribeStorageVirtualMachinesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStorageVirtualMachinesResponse::DescribeStorageVirtualMachinesResponse(
        const DescribeStorageVirtualMachinesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeStorageVirtualMachinesResponsePrivate(this), parent)
{
    setRequest(new DescribeStorageVirtualMachinesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStorageVirtualMachinesRequest * DescribeStorageVirtualMachinesResponse::request() const
{
    Q_D(const DescribeStorageVirtualMachinesResponse);
    return static_cast<const DescribeStorageVirtualMachinesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeStorageVirtualMachines \a response.
 */
void DescribeStorageVirtualMachinesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStorageVirtualMachinesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeStorageVirtualMachinesResponsePrivate
 * \brief The DescribeStorageVirtualMachinesResponsePrivate class provides private implementation for DescribeStorageVirtualMachinesResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeStorageVirtualMachinesResponsePrivate object with public implementation \a q.
 */
DescribeStorageVirtualMachinesResponsePrivate::DescribeStorageVirtualMachinesResponsePrivate(
    DescribeStorageVirtualMachinesResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeStorageVirtualMachines response element from \a xml.
 */
void DescribeStorageVirtualMachinesResponsePrivate::parseDescribeStorageVirtualMachinesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStorageVirtualMachinesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
