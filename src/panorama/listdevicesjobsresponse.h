// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICESJOBSRESPONSE_H
#define QTAWS_LISTDEVICESJOBSRESPONSE_H

#include "panoramaresponse.h"
#include "listdevicesjobsrequest.h"

namespace QtAws {
namespace Panorama {

class ListDevicesJobsResponsePrivate;

class QTAWSPANORAMA_EXPORT ListDevicesJobsResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListDevicesJobsResponse(const ListDevicesJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDevicesJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDevicesJobsResponse)
    Q_DISABLE_COPY(ListDevicesJobsResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
