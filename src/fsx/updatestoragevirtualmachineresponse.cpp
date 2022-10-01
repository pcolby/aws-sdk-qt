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
