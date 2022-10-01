// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILIDENTITYREQUEST_H
#define QTAWS_VERIFYEMAILIDENTITYREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class VerifyEmailIdentityRequestPrivate;

class QTAWSSES_EXPORT VerifyEmailIdentityRequest : public SesRequest {

public:
    VerifyEmailIdentityRequest(const VerifyEmailIdentityRequest &other);
    VerifyEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyEmailIdentityRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
