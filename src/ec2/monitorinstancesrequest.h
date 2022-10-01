// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MONITORINSTANCESREQUEST_H
#define QTAWS_MONITORINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class MonitorInstancesRequestPrivate;

class QTAWSEC2_EXPORT MonitorInstancesRequest : public Ec2Request {

public:
    MonitorInstancesRequest(const MonitorInstancesRequest &other);
    MonitorInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MonitorInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
