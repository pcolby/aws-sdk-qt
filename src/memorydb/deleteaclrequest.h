// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACLREQUEST_H
#define QTAWS_DELETEACLREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class DeleteACLRequestPrivate;

class QTAWSMEMORYDB_EXPORT DeleteACLRequest : public MemoryDbRequest {

public:
    DeleteACLRequest(const DeleteACLRequest &other);
    DeleteACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
