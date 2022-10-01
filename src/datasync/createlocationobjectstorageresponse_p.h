// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOCATIONOBJECTSTORAGERESPONSE_P_H
#define QTAWS_CREATELOCATIONOBJECTSTORAGERESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class CreateLocationObjectStorageResponse;

class CreateLocationObjectStorageResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit CreateLocationObjectStorageResponsePrivate(CreateLocationObjectStorageResponse * const q);

    void parseCreateLocationObjectStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLocationObjectStorageResponse)
    Q_DISABLE_COPY(CreateLocationObjectStorageResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
