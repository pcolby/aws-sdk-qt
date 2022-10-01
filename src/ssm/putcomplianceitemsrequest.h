// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPLIANCEITEMSREQUEST_H
#define QTAWS_PUTCOMPLIANCEITEMSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class PutComplianceItemsRequestPrivate;

class QTAWSSSM_EXPORT PutComplianceItemsRequest : public SsmRequest {

public:
    PutComplianceItemsRequest(const PutComplianceItemsRequest &other);
    PutComplianceItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutComplianceItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
