// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCESRESPONSE_H
#define QTAWS_LISTAPPLICATIONINSTANCESRESPONSE_H

#include "panoramaresponse.h"
#include "listapplicationinstancesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstancesResponsePrivate;

class QTAWSPANORAMA_EXPORT ListApplicationInstancesResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListApplicationInstancesResponse(const ListApplicationInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationInstancesResponse)
    Q_DISABLE_COPY(ListApplicationInstancesResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
