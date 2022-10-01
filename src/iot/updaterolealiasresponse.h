// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEALIASRESPONSE_H
#define QTAWS_UPDATEROLEALIASRESPONSE_H

#include "iotresponse.h"
#include "updaterolealiasrequest.h"

namespace QtAws {
namespace IoT {

class UpdateRoleAliasResponsePrivate;

class QTAWSIOT_EXPORT UpdateRoleAliasResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateRoleAliasResponse(const UpdateRoleAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoleAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleAliasResponse)
    Q_DISABLE_COPY(UpdateRoleAliasResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
