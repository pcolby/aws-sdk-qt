// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBFORDEVICESREQUEST_H
#define QTAWS_CREATEJOBFORDEVICESREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class CreateJobForDevicesRequestPrivate;

class QTAWSPANORAMA_EXPORT CreateJobForDevicesRequest : public PanoramaRequest {

public:
    CreateJobForDevicesRequest(const CreateJobForDevicesRequest &other);
    CreateJobForDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobForDevicesRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
