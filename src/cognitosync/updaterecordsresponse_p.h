// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERECORDSRESPONSE_P_H
#define QTAWS_UPDATERECORDSRESPONSE_P_H

#include "cognitosyncresponse_p.h"

namespace QtAws {
namespace CognitoSync {

class UpdateRecordsResponse;

class UpdateRecordsResponsePrivate : public CognitoSyncResponsePrivate {

public:

    explicit UpdateRecordsResponsePrivate(UpdateRecordsResponse * const q);

    void parseUpdateRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRecordsResponse)
    Q_DISABLE_COPY(UpdateRecordsResponsePrivate)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
