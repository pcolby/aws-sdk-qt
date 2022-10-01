// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORIGINENDPOINTSRESPONSE_H
#define QTAWS_LISTORIGINENDPOINTSRESPONSE_H

#include "mediapackageresponse.h"
#include "listoriginendpointsrequest.h"

namespace QtAws {
namespace MediaPackage {

class ListOriginEndpointsResponsePrivate;

class QTAWSMEDIAPACKAGE_EXPORT ListOriginEndpointsResponse : public MediaPackageResponse {
    Q_OBJECT

public:
    ListOriginEndpointsResponse(const ListOriginEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOriginEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOriginEndpointsResponse)
    Q_DISABLE_COPY(ListOriginEndpointsResponse)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
