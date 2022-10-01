// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXLUSTRERESPONSE_P_H
#define QTAWS_CREATELOCATIONFSXLUSTRERESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxLustreResponse;

class CreateLocationFsxLustreResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationFsxLustreResponsePrivate(CreateLocationFsxLustreResponse * const q);

    void parseCreateLocationFsxLustreResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxLustreResponse)
    Q_DISABLE_COPY(CreateLocationFsxLustreResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
