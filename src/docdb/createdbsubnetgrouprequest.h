// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPREQUEST_H
#define QTAWS_CREATEDBSUBNETGROUPREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class CreateDBSubnetGroupRequestPrivate;

class QTAWSDOCDB_EXPORT CreateDBSubnetGroupRequest : public DocDbRequest {

public:
    CreateDBSubnetGroupRequest(const CreateDBSubnetGroupRequest &other);
    CreateDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDBSubnetGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
