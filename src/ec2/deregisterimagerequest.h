// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIMAGEREQUEST_H
#define QTAWS_DEREGISTERIMAGEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeregisterImageRequestPrivate;

class QTAWSEC2_EXPORT DeregisterImageRequest : public Ec2Request {

public:
    DeregisterImageRequest(const DeregisterImageRequest &other);
    DeregisterImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
