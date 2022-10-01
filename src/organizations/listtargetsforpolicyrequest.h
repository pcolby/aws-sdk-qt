// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORPOLICYREQUEST_H
#define QTAWS_LISTTARGETSFORPOLICYREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class ListTargetsForPolicyRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT ListTargetsForPolicyRequest : public OrganizationsRequest {

public:
    ListTargetsForPolicyRequest(const ListTargetsForPolicyRequest &other);
    ListTargetsForPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTargetsForPolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
