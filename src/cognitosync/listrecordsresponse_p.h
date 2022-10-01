// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECORDSRESPONSE_P_H
#define QTAWS_LISTRECORDSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class ListRecordsResponse;

class ListRecordsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit ListRecordsResponsePrivate(ListRecordsResponse * const q);

    void parseListRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRecordsResponse)
    Q_DISABLE_COPY(ListRecordsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
