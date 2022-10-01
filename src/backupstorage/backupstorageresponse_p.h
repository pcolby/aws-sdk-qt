// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPSTORAGERESPONSE_P_H
#define QTAWS_BACKUPSTORAGERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace BackupStorage {

class BackupStorageResponse;

class BackupStorageResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit BackupStorageResponsePrivate(BackupStorageResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BackupStorageResponse)
    Q_DISABLE_COPY(BackupStorageResponsePrivate)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
