// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYPOLICYREQUEST_H
#define QTAWS_CREATEEMAILIDENTITYPOLICYREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityPolicyRequestPrivate;

class QTAWSSESV2_EXPORT CreateEmailIdentityPolicyRequest : public SESv2Request {

public:
    CreateEmailIdentityPolicyRequest(const CreateEmailIdentityPolicyRequest &other);
    CreateEmailIdentityPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailIdentityPolicyRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
