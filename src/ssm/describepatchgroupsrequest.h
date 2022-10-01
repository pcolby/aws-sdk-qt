// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPATCHGROUPSREQUEST_H
#define QTAWS_DESCRIBEPATCHGROUPSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribePatchGroupsRequestPrivate;

class QTAWSSSM_EXPORT DescribePatchGroupsRequest : public SsmRequest {

public:
    DescribePatchGroupsRequest(const DescribePatchGroupsRequest &other);
    DescribePatchGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePatchGroupsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
