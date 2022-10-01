// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCESREQUEST_H
#define QTAWS_STARTINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class StartInstancesRequestPrivate;

class QTAWSEC2_EXPORT StartInstancesRequest : public Ec2Request {

public:
    StartInstancesRequest(const StartInstancesRequest &other);
    StartInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
