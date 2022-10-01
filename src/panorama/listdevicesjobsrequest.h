// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESJOBSREQUEST_H
#define QTAWS_LISTDEVICESJOBSREQUEST_H

#include "panoramarequest.h"

namespace QtAws {
namespace Panorama {

class ListDevicesJobsRequestPrivate;

class QTAWSPANORAMA_EXPORT ListDevicesJobsRequest : public PanoramaRequest {

public:
    ListDevicesJobsRequest(const ListDevicesJobsRequest &other);
    ListDevicesJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicesJobsRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
