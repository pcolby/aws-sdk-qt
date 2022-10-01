// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEVICEREQUEST_H
#define QTAWS_GETCOREDEVICEREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GetCoreDeviceRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GetCoreDeviceRequest : public GreengrassV2Request {

public:
    GetCoreDeviceRequest(const GetCoreDeviceRequest &other);
    GetCoreDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
