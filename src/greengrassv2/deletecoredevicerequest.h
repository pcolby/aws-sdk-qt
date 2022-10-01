// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEVICEREQUEST_H
#define QTAWS_DELETECOREDEVICEREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteCoreDeviceRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT DeleteCoreDeviceRequest : public GreengrassV2Request {

public:
    DeleteCoreDeviceRequest(const DeleteCoreDeviceRequest &other);
    DeleteCoreDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCoreDeviceRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
