// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEADDRESSREQUEST_H
#define QTAWS_RELEASEADDRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReleaseAddressRequestPrivate;

class QTAWSEC2_EXPORT ReleaseAddressRequest : public Ec2Request {

public:
    ReleaseAddressRequest(const ReleaseAddressRequest &other);
    ReleaseAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
