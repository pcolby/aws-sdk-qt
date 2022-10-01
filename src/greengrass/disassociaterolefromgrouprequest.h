// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEROLEFROMGROUPREQUEST_H
#define QTAWS_DISASSOCIATEROLEFROMGROUPREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class DisassociateRoleFromGroupRequestPrivate;

class QTAWSGREENGRASS_EXPORT DisassociateRoleFromGroupRequest : public GreengrassRequest {

public:
    DisassociateRoleFromGroupRequest(const DisassociateRoleFromGroupRequest &other);
    DisassociateRoleFromGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRoleFromGroupRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
