// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESRESPONSE_H
#define QTAWS_LISTAPPLICATIONINSTANCENODEINSTANCESRESPONSE_H

#include "panoramaresponse.h"
#include "listapplicationinstancenodeinstancesrequest.h"

namespace QtAws {
namespace Panorama {

class ListApplicationInstanceNodeInstancesResponsePrivate;

class QTAWSPANORAMA_EXPORT ListApplicationInstanceNodeInstancesResponse : public PanoramaResponse {
    Q_OBJECT

public:
    ListApplicationInstanceNodeInstancesResponse(const ListApplicationInstanceNodeInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListApplicationInstanceNodeInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListApplicationInstanceNodeInstancesResponse)
    Q_DISABLE_COPY(ListApplicationInstanceNodeInstancesResponse)

};

} // namespace Panorama
} // namespace QtAws

#endif
