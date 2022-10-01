// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACLREQUEST_H
#define QTAWS_UPDATEACLREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateACLRequestPrivate;

class QTAWSMEMORYDB_EXPORT UpdateACLRequest : public MemoryDbRequest {

public:
    UpdateACLRequest(const UpdateACLRequest &other);
    UpdateACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
