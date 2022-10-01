// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATECHANNELCREDENTIALSREQUEST_H
#define QTAWS_ROTATECHANNELCREDENTIALSREQUEST_H

#include "mediapackagerequest.h"

namespace QtAws {
namespace MediaPackage {

class RotateChannelCredentialsRequestPrivate;

class QTAWSMEDIAPACKAGE_EXPORT RotateChannelCredentialsRequest : public MediaPackageRequest {

public:
    RotateChannelCredentialsRequest(const RotateChannelCredentialsRequest &other);
    RotateChannelCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateChannelCredentialsRequest)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
