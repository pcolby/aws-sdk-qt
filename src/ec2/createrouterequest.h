// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTEREQUEST_H
#define QTAWS_CREATEROUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateRouteRequestPrivate;

class QTAWSEC2_EXPORT CreateRouteRequest : public Ec2Request {

public:
    CreateRouteRequest(const CreateRouteRequest &other);
    CreateRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
