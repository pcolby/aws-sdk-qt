// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETGROUPREQUEST_H
#define QTAWS_CREATESUBNETGROUPREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class CreateSubnetGroupRequestPrivate;

class QTAWSMEMORYDB_EXPORT CreateSubnetGroupRequest : public MemoryDbRequest {

public:
    CreateSubnetGroupRequest(const CreateSubnetGroupRequest &other);
    CreateSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubnetGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
