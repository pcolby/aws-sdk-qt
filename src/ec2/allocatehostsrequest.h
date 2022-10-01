// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEHOSTSREQUEST_H
#define QTAWS_ALLOCATEHOSTSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AllocateHostsRequestPrivate;

class QTAWSEC2_EXPORT AllocateHostsRequest : public Ec2Request {

public:
    AllocateHostsRequest(const AllocateHostsRequest &other);
    AllocateHostsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
