// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACLREQUEST_H
#define QTAWS_CREATEACLREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateACLRequestPrivate;

class QTAWSMEMORYDB_EXPORT CreateACLRequest : public MemoryDbRequest {

public:
    CreateACLRequest(const CreateACLRequest &other);
    CreateACLRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateACLRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
