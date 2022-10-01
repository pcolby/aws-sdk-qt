// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFRAMEWORKREQUEST_H
#define QTAWS_CREATEFRAMEWORKREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class CreateFrameworkRequestPrivate;

class QTAWSBACKUP_EXPORT CreateFrameworkRequest : public BackupRequest {

public:
    CreateFrameworkRequest(const CreateFrameworkRequest &other);
    CreateFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
