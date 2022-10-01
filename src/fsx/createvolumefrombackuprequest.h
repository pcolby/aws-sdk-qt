// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEFROMBACKUPREQUEST_H
#define QTAWS_CREATEVOLUMEFROMBACKUPREQUEST_H

#include "fsxrequest.h"

namespace QtAws {
namespace FSx {

class CreateVolumeFromBackupRequestPrivate;

class QTAWSFSX_EXPORT CreateVolumeFromBackupRequest : public FSxRequest {

public:
    CreateVolumeFromBackupRequest(const CreateVolumeFromBackupRequest &other);
    CreateVolumeFromBackupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVolumeFromBackupRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
