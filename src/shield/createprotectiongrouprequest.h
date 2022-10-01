// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONGROUPREQUEST_H
#define QTAWS_CREATEPROTECTIONGROUPREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionGroupRequestPrivate;

class QTAWSSHIELD_EXPORT CreateProtectionGroupRequest : public ShieldRequest {

public:
    CreateProtectionGroupRequest(const CreateProtectionGroupRequest &other);
    CreateProtectionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProtectionGroupRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
