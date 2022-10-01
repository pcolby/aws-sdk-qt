// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDATASTORERESPONSE_P_H
#define QTAWS_CREATEEVENTDATASTORERESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class CreateEventDataStoreResponse;

class CreateEventDataStoreResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit CreateEventDataStoreResponsePrivate(CreateEventDataStoreResponse * const q);

    void parseCreateEventDataStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventDataStoreResponse)
    Q_DISABLE_COPY(CreateEventDataStoreResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
