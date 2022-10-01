// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYREQUEST_H
#define QTAWS_ATTACHPOLICYREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class AttachPolicyRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT AttachPolicyRequest : public OrganizationsRequest {

public:
    AttachPolicyRequest(const AttachPolicyRequest &other);
    AttachPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
