// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERETENTIONPOLICYREQUEST_H
#define QTAWS_DELETERETENTIONPOLICYREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DeleteRetentionPolicyRequestPrivate;

class QTAWSWORKMAIL_EXPORT DeleteRetentionPolicyRequest : public WorkMailRequest {

public:
    DeleteRetentionPolicyRequest(const DeleteRetentionPolicyRequest &other);
    DeleteRetentionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRetentionPolicyRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
