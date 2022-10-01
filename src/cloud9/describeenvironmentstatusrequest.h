// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTSTATUSREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentStatusRequestPrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentStatusRequest : public Cloud9Request {

public:
    DescribeEnvironmentStatusRequest(const DescribeEnvironmentStatusRequest &other);
    DescribeEnvironmentStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentStatusRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
