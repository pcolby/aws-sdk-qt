// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceltaskresponse.h"
#include "canceltaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::CancelTaskResponse
 * \brief The CancelTaskResponse class provides an interace for SnowDeviceManagement CancelTask responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::cancelTask
 */

/*!
 * Constructs a CancelTaskResponse object for \a reply to \a request, with parent \a parent.
 */
CancelTaskResponse::CancelTaskResponse(
        const CancelTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new CancelTaskResponsePrivate(this), parent)
{
    setRequest(new CancelTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelTaskRequest * CancelTaskResponse::request() const
{
    Q_D(const CancelTaskResponse);
    return static_cast<const CancelTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SnowDeviceManagement CancelTask \a response.
 */
void CancelTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::CancelTaskResponsePrivate
 * \brief The CancelTaskResponsePrivate class provides private implementation for CancelTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a CancelTaskResponsePrivate object with public implementation \a q.
 */
CancelTaskResponsePrivate::CancelTaskResponsePrivate(
    CancelTaskResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement CancelTask response element from \a xml.
 */
void CancelTaskResponsePrivate::parseCancelTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
