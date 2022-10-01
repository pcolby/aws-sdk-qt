// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICEMETADATAREQUEST_H
#define QTAWS_UPDATEDEVICEMETADATAREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class UpdateDeviceMetadataRequestPrivate;

class QTAWSPANORAMA_EXPORT UpdateDeviceMetadataRequest : public PanoramaRequest {

public:
    UpdateDeviceMetadataRequest(const UpdateDeviceMetadataRequest &other);
    UpdateDeviceMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceMetadataRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
