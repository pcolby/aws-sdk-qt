// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENVIRONMENTSREQUEST_H
#define QTAWS_DESCRIBEENVIRONMENTSREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class DescribeEnvironmentsRequestPrivate;

class QTAWSCLOUD9_EXPORT DescribeEnvironmentsRequest : public Cloud9Request {

public:
    DescribeEnvironmentsRequest(const DescribeEnvironmentsRequest &other);
    DescribeEnvironmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEnvironmentsRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
