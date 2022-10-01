// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEFILESYSTEMNFSV3LOCKSRESPONSE_H
#define QTAWS_RELEASEFILESYSTEMNFSV3LOCKSRESPONSE_H

#include "fsxresponse.h"
#include "releasefilesystemnfsv3locksrequest.h"

namespace QtAws {
namespace FSx {

class ReleaseFileSystemNfsV3LocksResponsePrivate;

class QTAWSFSX_EXPORT ReleaseFileSystemNfsV3LocksResponse : public FSxResponse {
    Q_OBJECT

public:
    ReleaseFileSystemNfsV3LocksResponse(const ReleaseFileSystemNfsV3LocksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReleaseFileSystemNfsV3LocksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseFileSystemNfsV3LocksResponse)
    Q_DISABLE_COPY(ReleaseFileSystemNfsV3LocksResponse)

};

} // namespace FSx
} // namespace QtAws

#endif
