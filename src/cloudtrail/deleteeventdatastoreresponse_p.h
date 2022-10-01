// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDATASTORERESPONSE_P_H
#define QTAWS_DELETEEVENTDATASTORERESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class DeleteEventDataStoreResponse;

class DeleteEventDataStoreResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit DeleteEventDataStoreResponsePrivate(DeleteEventDataStoreResponse * const q);

    void parseDeleteEventDataStoreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventDataStoreResponse)
    Q_DISABLE_COPY(DeleteEventDataStoreResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
