// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEDULINGPOLICIESREQUEST_H
#define QTAWS_LISTSCHEDULINGPOLICIESREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class ListSchedulingPoliciesRequestPrivate;

class QTAWSBATCH_EXPORT ListSchedulingPoliciesRequest : public BatchRequest {

public:
    ListSchedulingPoliciesRequest(const ListSchedulingPoliciesRequest &other);
    ListSchedulingPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchedulingPoliciesRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
