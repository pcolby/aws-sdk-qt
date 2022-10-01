// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMANDSREQUEST_H
#define QTAWS_DESCRIBECOMMANDSREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class DescribeCommandsRequestPrivate;

class QTAWSOPSWORKS_EXPORT DescribeCommandsRequest : public OpsWorksRequest {

public:
    DescribeCommandsRequest(const DescribeCommandsRequest &other);
    DescribeCommandsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCommandsRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
