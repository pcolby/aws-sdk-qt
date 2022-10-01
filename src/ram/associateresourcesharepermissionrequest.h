// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_H
#define QTAWS_ASSOCIATERESOURCESHAREPERMISSIONREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceSharePermissionRequestPrivate;

class QTAWSRAM_EXPORT AssociateResourceSharePermissionRequest : public RamRequest {

public:
    AssociateResourceSharePermissionRequest(const AssociateResourceSharePermissionRequest &other);
    AssociateResourceSharePermissionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceSharePermissionRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
