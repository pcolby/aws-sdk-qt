// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROTECTIONGROUPREQUEST_H
#define QTAWS_UPDATEPROTECTIONGROUPREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class UpdateProtectionGroupRequestPrivate;

class QTAWSSHIELD_EXPORT UpdateProtectionGroupRequest : public ShieldRequest {

public:
    UpdateProtectionGroupRequest(const UpdateProtectionGroupRequest &other);
    UpdateProtectionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
