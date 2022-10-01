// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_H
#define QTAWS_UPDATEUSERREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateUserRequestPrivate;

class QTAWSMEMORYDB_EXPORT UpdateUserRequest : public MemoryDbRequest {

public:
    UpdateUserRequest(const UpdateUserRequest &other);
    UpdateUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
