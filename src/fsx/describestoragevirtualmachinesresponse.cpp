// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
