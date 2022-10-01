// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROTECTEDRESOURCESREQUEST_H
#define QTAWS_LISTPROTECTEDRESOURCESREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListProtectedResourcesRequestPrivate;

class QTAWSBACKUP_EXPORT ListProtectedResourcesRequest : public BackupRequest {

public:
    ListProtectedResourcesRequest(const ListProtectedResourcesRequest &other);
    ListProtectedResourcesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProtectedResourcesRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
