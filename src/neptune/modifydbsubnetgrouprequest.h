// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPREQUEST_H
#define QTAWS_MODIFYDBSUBNETGROUPREQUEST_H

#include "neptunerequest.h"

namespace QtAws {
namespace Neptune {

class ModifyDBSubnetGroupRequestPrivate;

class QTAWSNEPTUNE_EXPORT ModifyDBSubnetGroupRequest : public NeptuneRequest {

public:
    ModifyDBSubnetGroupRequest(const ModifyDBSubnetGroupRequest &other);
    ModifyDBSubnetGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyDBSubnetGroupRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
