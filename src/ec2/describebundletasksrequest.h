// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLETASKSREQUEST_H
#define QTAWS_DESCRIBEBUNDLETASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeBundleTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeBundleTasksRequest : public Ec2Request {

public:
    DescribeBundleTasksRequest(const DescribeBundleTasksRequest &other);
    DescribeBundleTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBundleTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
