// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBINSTANCEREQUEST_H
#define QTAWS_DELETEDBINSTANCEREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class DeleteDBInstanceRequestPrivate;

class QTAWSDOCDB_EXPORT DeleteDBInstanceRequest : public DocDbRequest {

public:
    DeleteDBInstanceRequest(const DeleteDBInstanceRequest &other);
    DeleteDBInstanceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDBInstanceRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
