// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNMONITORINSTANCESREQUEST_H
#define QTAWS_UNMONITORINSTANCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class UnmonitorInstancesRequestPrivate;

class QTAWSEC2_EXPORT UnmonitorInstancesRequest : public Ec2Request {

public:
    UnmonitorInstancesRequest(const UnmonitorInstancesRequest &other);
    UnmonitorInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnmonitorInstancesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
