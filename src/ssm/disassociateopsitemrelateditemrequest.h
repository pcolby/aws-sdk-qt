// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEOPSITEMRELATEDITEMREQUEST_H
#define QTAWS_DISASSOCIATEOPSITEMRELATEDITEMREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DisassociateOpsItemRelatedItemRequestPrivate;

class QTAWSSSM_EXPORT DisassociateOpsItemRelatedItemRequest : public SsmRequest {

public:
    DisassociateOpsItemRelatedItemRequest(const DisassociateOpsItemRelatedItemRequest &other);
    DisassociateOpsItemRelatedItemRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateOpsItemRelatedItemRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
