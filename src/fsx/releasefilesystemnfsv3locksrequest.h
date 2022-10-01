// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELEASEFILESYSTEMNFSV3LOCKSREQUEST_H
#define QTAWS_RELEASEFILESYSTEMNFSV3LOCKSREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class ReleaseFileSystemNfsV3LocksRequestPrivate;

class QTAWSFSX_EXPORT ReleaseFileSystemNfsV3LocksRequest : public FSxRequest {

public:
    ReleaseFileSystemNfsV3LocksRequest(const ReleaseFileSystemNfsV3LocksRequest &other);
    ReleaseFileSystemNfsV3LocksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReleaseFileSystemNfsV3LocksRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
