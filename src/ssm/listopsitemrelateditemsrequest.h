// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOPSITEMRELATEDITEMSREQUEST_H
#define QTAWS_LISTOPSITEMRELATEDITEMSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class ListOpsItemRelatedItemsRequestPrivate;

class QTAWSSSM_EXPORT ListOpsItemRelatedItemsRequest : public SsmRequest {

public:
    ListOpsItemRelatedItemsRequest(const ListOpsItemRelatedItemsRequest &other);
    ListOpsItemRelatedItemsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOpsItemRelatedItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
