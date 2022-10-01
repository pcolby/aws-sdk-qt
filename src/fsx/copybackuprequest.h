// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYBACKUPREQUEST_H
#define QTAWS_COPYBACKUPREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CopyBackupRequestPrivate;

class QTAWSFSX_EXPORT CopyBackupRequest : public FSxRequest {

public:
    CopyBackupRequest(const CopyBackupRequest &other);
    CopyBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
