// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLEALIASRESPONSE_H
#define QTAWS_CREATEROLEALIASRESPONSE_H

#include "iotresponse.h"
#include "createrolealiasrequest.h"

namespace QtAws {
namespace IoT {

class CreateRoleAliasResponsePrivate;

class QTAWSIOT_EXPORT CreateRoleAliasResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateRoleAliasResponse(const CreateRoleAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoleAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoleAliasResponse)
    Q_DISABLE_COPY(CreateRoleAliasResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
