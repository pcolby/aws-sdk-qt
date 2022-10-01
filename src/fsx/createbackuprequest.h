// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKUPREQUEST_H
#define QTAWS_CREATEBACKUPREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateBackupRequestPrivate;

class QTAWSFSX_EXPORT CreateBackupRequest : public FSxRequest {

public:
    CreateBackupRequest(const CreateBackupRequest &other);
    CreateBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
