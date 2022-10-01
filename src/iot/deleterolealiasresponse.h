// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEALIASRESPONSE_H
#define QTAWS_DELETEROLEALIASRESPONSE_H

#include "iotresponse.h"
#include "deleterolealiasrequest.h"

namespace QtAws {
namespace IoT {

class DeleteRoleAliasResponsePrivate;

class QTAWSIOT_EXPORT DeleteRoleAliasResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteRoleAliasResponse(const DeleteRoleAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoleAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoleAliasResponse)
    Q_DISABLE_COPY(DeleteRoleAliasResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
