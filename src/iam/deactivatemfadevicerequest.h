// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEMFADEVICEREQUEST_H
#define QTAWS_DEACTIVATEMFADEVICEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class DeactivateMFADeviceRequestPrivate;

class QTAWSIAM_EXPORT DeactivateMFADeviceRequest : public IamRequest {

public:
    DeactivateMFADeviceRequest(const DeactivateMFADeviceRequest &other);
    DeactivateMFADeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateMFADeviceRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
