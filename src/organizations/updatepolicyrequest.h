// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPOLICYREQUEST_H
#define QTAWS_UPDATEPOLICYREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class UpdatePolicyRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT UpdatePolicyRequest : public OrganizationsRequest {

public:
    UpdatePolicyRequest(const UpdatePolicyRequest &other);
    UpdatePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
