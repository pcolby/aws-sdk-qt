// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOMPLIANCEITEMSREQUEST_H
#define QTAWS_LISTCOMPLIANCEITEMSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListComplianceItemsRequestPrivate;

class QTAWSSSM_EXPORT ListComplianceItemsRequest : public SsmRequest {

public:
    ListComplianceItemsRequest(const ListComplianceItemsRequest &other);
    ListComplianceItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListComplianceItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
