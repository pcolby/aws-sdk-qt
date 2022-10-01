// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEREQUEST_H
#define QTAWS_DELETEDEVICEREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class DeleteDeviceRequestPrivate;

class QTAWSPANORAMA_EXPORT DeleteDeviceRequest : public PanoramaRequest {

public:
    DeleteDeviceRequest(const DeleteDeviceRequest &other);
    DeleteDeviceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDeviceRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
