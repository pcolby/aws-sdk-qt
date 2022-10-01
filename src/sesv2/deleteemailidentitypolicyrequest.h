// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYPOLICYREQUEST_H
#define QTAWS_DELETEEMAILIDENTITYPOLICYREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityPolicyRequestPrivate;

class QTAWSSESV2_EXPORT DeleteEmailIdentityPolicyRequest : public SESv2Request {

public:
    DeleteEmailIdentityPolicyRequest(const DeleteEmailIdentityPolicyRequest &other);
    DeleteEmailIdentityPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailIdentityPolicyRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
