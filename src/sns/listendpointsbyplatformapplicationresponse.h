// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONRESPONSE_H
#define QTAWS_LISTENDPOINTSBYPLATFORMAPPLICATIONRESPONSE_H

#include "snsresponse.h"
#include "listendpointsbyplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class ListEndpointsByPlatformApplicationResponsePrivate;

class QTAWSSNS_EXPORT ListEndpointsByPlatformApplicationResponse : public SnsResponse {
    Q_OBJECT

public:
    ListEndpointsByPlatformApplicationResponse(const ListEndpointsByPlatformApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEndpointsByPlatformApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEndpointsByPlatformApplicationResponse)
    Q_DISABLE_COPY(ListEndpointsByPlatformApplicationResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
