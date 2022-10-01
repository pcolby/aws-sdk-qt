// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEGRANTREQUEST_H
#define QTAWS_REVOKEGRANTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class RevokeGrantRequestPrivate;

class QTAWSKMS_EXPORT RevokeGrantRequest : public KmsRequest {

public:
    RevokeGrantRequest(const RevokeGrantRequest &other);
    RevokeGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
