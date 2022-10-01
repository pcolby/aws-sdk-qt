// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEOPSITEMRELATEDITEMREQUEST_H
#define QTAWS_ASSOCIATEOPSITEMRELATEDITEMREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class AssociateOpsItemRelatedItemRequestPrivate;

class QTAWSSSM_EXPORT AssociateOpsItemRelatedItemRequest : public SsmRequest {

public:
    AssociateOpsItemRelatedItemRequest(const AssociateOpsItemRelatedItemRequest &other);
    AssociateOpsItemRelatedItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateOpsItemRelatedItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
