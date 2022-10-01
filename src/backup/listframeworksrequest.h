// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFRAMEWORKSREQUEST_H
#define QTAWS_LISTFRAMEWORKSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListFrameworksRequestPrivate;

class QTAWSBACKUP_EXPORT ListFrameworksRequest : public BackupRequest {

public:
    ListFrameworksRequest(const ListFrameworksRequest &other);
    ListFrameworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFrameworksRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
