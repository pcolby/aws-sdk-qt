// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPOLICYREQUEST_H
#define QTAWS_PUTPOLICYREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class PutPolicyRequestPrivate;

class QTAWSFMS_EXPORT PutPolicyRequest : public FmsRequest {

public:
    PutPolicyRequest(const PutPolicyRequest &other);
    PutPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPolicyRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
