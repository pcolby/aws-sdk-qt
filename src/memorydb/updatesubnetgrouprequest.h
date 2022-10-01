// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBNETGROUPREQUEST_H
#define QTAWS_UPDATESUBNETGROUPREQUEST_H

#include "memorydbrequest.h"

namespace QtAws {
namespace MemoryDb {

class UpdateSubnetGroupRequestPrivate;

class QTAWSMEMORYDB_EXPORT UpdateSubnetGroupRequest : public MemoryDbRequest {

public:
    UpdateSubnetGroupRequest(const UpdateSubnetGroupRequest &other);
    UpdateSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubnetGroupRequest)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
