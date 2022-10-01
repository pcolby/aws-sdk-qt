// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTSETTINGREQUEST_H
#define QTAWS_DELETEACCOUNTSETTINGREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteAccountSettingRequestPrivate;

class QTAWSECS_EXPORT DeleteAccountSettingRequest : public EcsRequest {

public:
    DeleteAccountSettingRequest(const DeleteAccountSettingRequest &other);
    DeleteAccountSettingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountSettingRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
