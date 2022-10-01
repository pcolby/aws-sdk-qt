// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONREQUEST_H
#define QTAWS_CREATEPROTECTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionRequestPrivate;

class QTAWSSHIELD_EXPORT CreateProtectionRequest : public ShieldRequest {

public:
    CreateProtectionRequest(const CreateProtectionRequest &other);
    CreateProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
