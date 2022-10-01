// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPINSTANCESREQUEST_H
#define QTAWS_STOPINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class StopInstancesRequestPrivate;

class QTAWSEC2_EXPORT StopInstancesRequest : public Ec2Request {

public:
    StopInstancesRequest(const StopInstancesRequest &other);
    StopInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
