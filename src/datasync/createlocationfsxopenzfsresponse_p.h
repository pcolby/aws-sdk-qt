// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONFSXOPENZFSRESPONSE_P_H
#define QTAWS_CREATELOCATIONFSXOPENZFSRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationFsxOpenZfsResponse;

class CreateLocationFsxOpenZfsResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationFsxOpenZfsResponsePrivate(CreateLocationFsxOpenZfsResponse * const q);

    void parseCreateLocationFsxOpenZfsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationFsxOpenZfsResponse)
    Q_DISABLE_COPY(CreateLocationFsxOpenZfsResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
