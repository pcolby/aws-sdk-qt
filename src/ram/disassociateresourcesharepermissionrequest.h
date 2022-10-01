// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_H
#define QTAWS_DISASSOCIATERESOURCESHAREPERMISSIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class DisassociateResourceSharePermissionRequestPrivate;

class QTAWSRAM_EXPORT DisassociateResourceSharePermissionRequest : public RamRequest {

public:
    DisassociateResourceSharePermissionRequest(const DisassociateResourceSharePermissionRequest &other);
    DisassociateResourceSharePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateResourceSharePermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
