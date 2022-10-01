// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSETRELATIONSHIPSRESPONSE_P_H
#define QTAWS_LISTASSETRELATIONSHIPSRESPONSE_P_H

#include "iotsitewiseresponse_p.h"

namespace QtAws {
namespace IoTSiteWise {

class ListAssetRelationshipsResponse;

class ListAssetRelationshipsResponsePrivate : public IoTSiteWiseResponsePrivate {

public:

    explicit ListAssetRelationshipsResponsePrivate(ListAssetRelationshipsResponse * const q);

    void parseListAssetRelationshipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssetRelationshipsResponse)
    Q_DISABLE_COPY(ListAssetRelationshipsResponsePrivate)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
