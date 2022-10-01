// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERPACKAGEVERSIONREQUEST_H
#define QTAWS_DEREGISTERPACKAGEVERSIONREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DeregisterPackageVersionRequestPrivate;

class QTAWSPANORAMA_EXPORT DeregisterPackageVersionRequest : public PanoramaRequest {

public:
    DeregisterPackageVersionRequest(const DeregisterPackageVersionRequest &other);
    DeregisterPackageVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterPackageVersionRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
