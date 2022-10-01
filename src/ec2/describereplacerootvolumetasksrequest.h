// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSREQUEST_H
#define QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DescribeReplaceRootVolumeTasksRequestPrivate;

class QTAWSEC2_EXPORT DescribeReplaceRootVolumeTasksRequest : public Ec2Request {

public:
    DescribeReplaceRootVolumeTasksRequest(const DescribeReplaceRootVolumeTasksRequest &other);
    DescribeReplaceRootVolumeTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplaceRootVolumeTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
