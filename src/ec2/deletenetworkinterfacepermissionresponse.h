// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINTERFACEPERMISSIONRESPONSE_H
#define QTAWS_DELETENETWORKINTERFACEPERMISSIONRESPONSE_H

#include "ec2response.h"
#include "deletenetworkinterfacepermissionrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInterfacePermissionResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInterfacePermissionResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInterfacePermissionResponse(const DeleteNetworkInterfacePermissionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInterfacePermissionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInterfacePermissionResponse)
    Q_DISABLE_COPY(DeleteNetworkInterfacePermissionResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
