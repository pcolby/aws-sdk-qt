// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEFAULTRETENTIONPOLICYREQUEST_H
#define QTAWS_GETDEFAULTRETENTIONPOLICYREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class GetDefaultRetentionPolicyRequestPrivate;

class QTAWSWORKMAIL_EXPORT GetDefaultRetentionPolicyRequest : public WorkMailRequest {

public:
    GetDefaultRetentionPolicyRequest(const GetDefaultRetentionPolicyRequest &other);
    GetDefaultRetentionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDefaultRetentionPolicyRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
