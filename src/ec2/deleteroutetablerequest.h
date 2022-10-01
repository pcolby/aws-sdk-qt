// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTETABLEREQUEST_H
#define QTAWS_DELETEROUTETABLEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteTableRequestPrivate;

class QTAWSEC2_EXPORT DeleteRouteTableRequest : public Ec2Request {

public:
    DeleteRouteTableRequest(const DeleteRouteTableRequest &other);
    DeleteRouteTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
