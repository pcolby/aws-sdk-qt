// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETMEMBERSHIPDATASOURCESREQUEST_H
#define QTAWS_BATCHGETMEMBERSHIPDATASOURCESREQUEST_H

#include "detectiverequest.h"

namespace QtAws {
namespace Detective {

class BatchGetMembershipDatasourcesRequestPrivate;

class QTAWSDETECTIVE_EXPORT BatchGetMembershipDatasourcesRequest : public DetectiveRequest {

public:
    BatchGetMembershipDatasourcesRequest(const BatchGetMembershipDatasourcesRequest &other);
    BatchGetMembershipDatasourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetMembershipDatasourcesRequest)

};

} // namespace Detective
} // namespace QtAws

#endif
