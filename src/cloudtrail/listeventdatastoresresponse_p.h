// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTDATASTORESRESPONSE_P_H
#define QTAWS_LISTEVENTDATASTORESRESPONSE_P_H

#include "cloudtrailresponse_p.h"

namespace QtAws {
namespace CloudTrail {

class ListEventDataStoresResponse;

class ListEventDataStoresResponsePrivate : public CloudTrailResponsePrivate {

public:

    explicit ListEventDataStoresResponsePrivate(ListEventDataStoresResponse * const q);

    void parseListEventDataStoresResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventDataStoresResponse)
    Q_DISABLE_COPY(ListEventDataStoresResponsePrivate)

};

} // namespace CloudTrail
} // namespace QtAws

#endif
