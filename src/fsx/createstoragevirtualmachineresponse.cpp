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

#include "createstoragevirtualmachineresponse.h"
#include "createstoragevirtualmachineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::CreateStorageVirtualMachineResponse
 * \brief The CreateStorageVirtualMachineResponse class provides an interace for FSx CreateStorageVirtualMachine responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::createStorageVirtualMachine
 */

/*!
 * Constructs a CreateStorageVirtualMachineResponse object for \a reply to \a request, with parent \a parent.
 */
CreateStorageVirtualMachineResponse::CreateStorageVirtualMachineResponse(
        const CreateStorageVirtualMachineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new CreateStorageVirtualMachineResponsePrivate(this), parent)
{
    setRequest(new CreateStorageVirtualMachineRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateStorageVirtualMachineRequest * CreateStorageVirtualMachineResponse::request() const
{
    Q_D(const CreateStorageVirtualMachineResponse);
    return static_cast<const CreateStorageVirtualMachineRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx CreateStorageVirtualMachine \a response.
 */
void CreateStorageVirtualMachineResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateStorageVirtualMachineResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::CreateStorageVirtualMachineResponsePrivate
 * \brief The CreateStorageVirtualMachineResponsePrivate class provides private implementation for CreateStorageVirtualMachineResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a CreateStorageVirtualMachineResponsePrivate object with public implementation \a q.
 */
CreateStorageVirtualMachineResponsePrivate::CreateStorageVirtualMachineResponsePrivate(
    CreateStorageVirtualMachineResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx CreateStorageVirtualMachine response element from \a xml.
 */
void CreateStorageVirtualMachineResponsePrivate::parseCreateStorageVirtualMachineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateStorageVirtualMachineResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
