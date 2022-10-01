// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONGROUPREQUEST_H
#define QTAWS_DELETEPROTECTIONGROUPREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionGroupRequestPrivate;

class QTAWSSHIELD_EXPORT DeleteProtectionGroupRequest : public ShieldRequest {

public:
    DeleteProtectionGroupRequest(const DeleteProtectionGroupRequest &other);
    DeleteProtectionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
