// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatestoragevirtualmachineresponse.h"
#include "updatestoragevirtualmachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::UpdateStorageVirtualMachineResponse
 * \brief The UpdateStorageVirtualMachineResponse class provides an interace for FSx UpdateStorageVirtualMachine responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::updateStorageVirtualMachine
 */

/*!
 * Constructs a UpdateStorageVirtualMachineResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateStorageVirtualMachineResponse::UpdateStorageVirtualMachineResponse(
        const UpdateStorageVirtualMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new UpdateStorageVirtualMachineResponsePrivate(this), parent)
{
    setRequest(new UpdateStorageVirtualMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateStorageVirtualMachineRequest * UpdateStorageVirtualMachineResponse::request() const
{
    Q_D(const UpdateStorageVirtualMachineResponse);
    return static_cast<const UpdateStorageVirtualMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx UpdateStorageVirtualMachine \a response.
 */
void UpdateStorageVirtualMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateStorageVirtualMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::UpdateStorageVirtualMachineResponsePrivate
 * \brief The UpdateStorageVirtualMachineResponsePrivate class provides private implementation for UpdateStorageVirtualMachineResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a UpdateStorageVirtualMachineResponsePrivate object with public implementation \a q.
 */
UpdateStorageVirtualMachineResponsePrivate::UpdateStorageVirtualMachineResponsePrivate(
    UpdateStorageVirtualMachineResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx UpdateStorageVirtualMachine response element from \a xml.
 */
void UpdateStorageVirtualMachineResponsePrivate::parseUpdateStorageVirtualMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateStorageVirtualMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
