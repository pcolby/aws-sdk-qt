// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROUTEREQUEST_H
#define QTAWS_DELETEROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteRouteRequestPrivate;

class QTAWSEC2_EXPORT DeleteRouteRequest : public Ec2Request {

public:
    DeleteRouteRequest(const DeleteRouteRequest &other);
    DeleteRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
