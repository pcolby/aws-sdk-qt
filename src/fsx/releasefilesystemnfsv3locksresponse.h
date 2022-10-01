/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
