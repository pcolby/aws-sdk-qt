// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPREQUEST_H
#define QTAWS_MODIFYDBSUBNETGROUPREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class ModifyDBSubnetGroupRequestPrivate;

class QTAWSDOCDB_EXPORT ModifyDBSubnetGroupRequest : public DocDbRequest {

public:
    ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other);
    ModifyDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSubnetGroupRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
