// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTETABLEREQUEST_H
#define QTAWS_CREATEROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateRouteTableRequestPrivate;

class QTAWSEC2_EXPORT CreateRouteTableRequest : public Ec2Request {

public:
    CreateRouteTableRequest(const CreateRouteTableRequest &other);
    CreateRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
