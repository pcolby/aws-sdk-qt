// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONNFSRESPONSE_P_H
#define QTAWS_CREATELOCATIONNFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationNfsResponse;

class CreateLocationNfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationNfsResponsePrivate(CreateLocationNfsResponse * const q);

    void parseCreateLocationNfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationNfsResponse)
    Q_DISABLE_COPY(CreateLocationNfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
