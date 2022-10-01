// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICYREQUEST_H
#define QTAWS_DESCRIBEPOLICYREQUEST_H

#include "organizationsrequest.h"

namespace QtAws {
namespace Organizations {

class DescribePolicyRequestPrivate;

class QTAWSORGANIZATIONS_EXPORT DescribePolicyRequest : public OrganizationsRequest {

public:
    DescribePolicyRequest(const DescribePolicyRequest &other);
    DescribePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePolicyRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
