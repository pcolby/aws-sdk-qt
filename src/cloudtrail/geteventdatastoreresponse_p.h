// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTDATASTORERESPONSE_P_H
#define QTAWS_GETEVENTDATASTORERESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class GetEventDataStoreResponse;

class GetEventDataStoreResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit GetEventDataStoreResponsePrivate(GetEventDataStoreResponse * const q);

    void parseGetEventDataStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEventDataStoreResponse)
    Q_DISABLE_COPY(GetEventDataStoreResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
