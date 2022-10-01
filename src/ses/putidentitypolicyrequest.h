// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIDENTITYPOLICYREQUEST_H
#define QTAWS_PUTIDENTITYPOLICYREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class PutIdentityPolicyRequestPrivate;

class QTAWSSES_EXPORT PutIdentityPolicyRequest : public SesRequest {

public:
    PutIdentityPolicyRequest(const PutIdentityPolicyRequest &other);
    PutIdentityPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutIdentityPolicyRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
