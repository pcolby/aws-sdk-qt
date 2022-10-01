// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
