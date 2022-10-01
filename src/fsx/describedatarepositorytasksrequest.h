// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYTASKSREQUEST_H
#define QTAWS_DESCRIBEDATAREPOSITORYTASKSREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryTasksRequestPrivate;

class QTAWSFSX_EXPORT DescribeDataRepositoryTasksRequest : public FSxRequest {

public:
    DescribeDataRepositoryTasksRequest(const DescribeDataRepositoryTasksRequest &other);
    DescribeDataRepositoryTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDataRepositoryTasksRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
