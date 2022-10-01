// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEFILESYSTEMNFSV3LOCKSRESPONSE_P_H
#define QTAWS_RELEASEFILESYSTEMNFSV3LOCKSRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class ReleaseFileSystemNfsV3LocksResponse;

class ReleaseFileSystemNfsV3LocksResponsePrivate : public FSxResponsePrivate {

public:

    explicit ReleaseFileSystemNfsV3LocksResponsePrivate(ReleaseFileSystemNfsV3LocksResponse * const q);

    void parseReleaseFileSystemNfsV3LocksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReleaseFileSystemNfsV3LocksResponse)
    Q_DISABLE_COPY(ReleaseFileSystemNfsV3LocksResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
