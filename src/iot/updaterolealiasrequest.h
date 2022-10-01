// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLEALIASREQUEST_H
#define QTAWS_UPDATEROLEALIASREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class UpdateRoleAliasRequestPrivate;

class QTAWSIOT_EXPORT UpdateRoleAliasRequest : public IoTRequest {

public:
    UpdateRoleAliasRequest(const UpdateRoleAliasRequest &other);
    UpdateRoleAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleAliasRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
