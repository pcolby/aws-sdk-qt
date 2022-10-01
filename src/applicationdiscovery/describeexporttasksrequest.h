// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTTASKSREQUEST_H
#define QTAWS_DESCRIBEEXPORTTASKSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportTasksRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeExportTasksRequest : public ApplicationDiscoveryRequest {

public:
    DescribeExportTasksRequest(const DescribeExportTasksRequest &other);
    DescribeExportTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportTasksRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
