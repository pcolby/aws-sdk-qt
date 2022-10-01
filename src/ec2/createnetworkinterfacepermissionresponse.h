// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACEPERMISSIONRESPONSE_H
#define QTAWS_CREATENETWORKINTERFACEPERMISSIONRESPONSE_H

#include "ec2response.h"
#include "createnetworkinterfacepermissionrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfacePermissionResponsePrivate;

class QTAWSEC2_EXPORT CreateNetworkInterfacePermissionResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateNetworkInterfacePermissionResponse(const CreateNetworkInterfacePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkInterfacePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkInterfacePermissionResponse)
    Q_DISABLE_COPY(CreateNetworkInterfacePermissionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
