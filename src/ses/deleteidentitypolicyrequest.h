// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPOLICYREQUEST_H
#define QTAWS_DELETEIDENTITYPOLICYREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class DeleteIdentityPolicyRequestPrivate;

class QTAWSSES_EXPORT DeleteIdentityPolicyRequest : public SesRequest {

public:
    DeleteIdentityPolicyRequest(const DeleteIdentityPolicyRequest &other);
    DeleteIdentityPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityPolicyRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
