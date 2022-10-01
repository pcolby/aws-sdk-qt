// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOBJECTSREQUEST_H
#define QTAWS_LISTOBJECTSREQUEST_H

#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class ListObjectsRequestPrivate;

class QTAWSBACKUPSTORAGE_EXPORT ListObjectsRequest : public BackupStorageRequest {

public:
    ListObjectsRequest(const ListObjectsRequest &other);
    ListObjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListObjectsRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
