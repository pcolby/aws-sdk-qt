// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTTASKSREQUEST_H
#define QTAWS_DESCRIBEIMPORTTASKSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeImportTasksRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeImportTasksRequest : public ApplicationDiscoveryRequest {

public:
    DescribeImportTasksRequest(const DescribeImportTasksRequest &other);
    DescribeImportTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportTasksRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
