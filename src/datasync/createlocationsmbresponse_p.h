// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONSMBRESPONSE_P_H
#define QTAWS_CREATELOCATIONSMBRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationSmbResponse;

class CreateLocationSmbResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationSmbResponsePrivate(CreateLocationSmbResponse * const q);

    void parseCreateLocationSmbResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationSmbResponse)
    Q_DISABLE_COPY(CreateLocationSmbResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
