// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCESREQUEST_H
#define QTAWS_TERMINATEINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class TerminateInstancesRequestPrivate;

class QTAWSEC2_EXPORT TerminateInstancesRequest : public Ec2Request {

public:
    TerminateInstancesRequest(const TerminateInstancesRequest &other);
    TerminateInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TerminateInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
