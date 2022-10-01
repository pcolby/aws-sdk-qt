// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONEFSRESPONSE_P_H
#define QTAWS_CREATELOCATIONEFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationEfsResponse;

class CreateLocationEfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationEfsResponsePrivate(CreateLocationEfsResponse * const q);

    void parseCreateLocationEfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationEfsResponse)
    Q_DISABLE_COPY(CreateLocationEfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
