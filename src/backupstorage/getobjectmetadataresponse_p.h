// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTMETADATARESPONSE_P_H
#define QTAWS_GETOBJECTMETADATARESPONSE_P_H

#include "backupstorageresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class GetObjectMetadataResponse;

class GetObjectMetadataResponsePrivate : public BackupStorageResponsePrivate {

public:

    explicit GetObjectMetadataResponsePrivate(GetObjectMetadataResponse * const q);

    void parseGetObjectMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectMetadataResponse)
    Q_DISABLE_COPY(GetObjectMetadataResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
