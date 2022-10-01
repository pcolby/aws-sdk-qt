// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BUNDLEINSTANCEREQUEST_H
#define QTAWS_BUNDLEINSTANCEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class BundleInstanceRequestPrivate;

class QTAWSEC2_EXPORT BundleInstanceRequest : public Ec2Request {

public:
    BundleInstanceRequest(const BundleInstanceRequest &other);
    BundleInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BundleInstanceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
