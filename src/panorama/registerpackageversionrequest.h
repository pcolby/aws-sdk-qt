// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERPACKAGEVERSIONREQUEST_H
#define QTAWS_REGISTERPACKAGEVERSIONREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class RegisterPackageVersionRequestPrivate;

class QTAWSPANORAMA_EXPORT RegisterPackageVersionRequest : public PanoramaRequest {

public:
    RegisterPackageVersionRequest(const RegisterPackageVersionRequest &other);
    RegisterPackageVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterPackageVersionRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
