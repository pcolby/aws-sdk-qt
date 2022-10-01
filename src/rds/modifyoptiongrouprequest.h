// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYOPTIONGROUPREQUEST_H
#define QTAWS_MODIFYOPTIONGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyOptionGroupRequestPrivate;

class QTAWSRDS_EXPORT ModifyOptionGroupRequest : public RdsRequest {

public:
    ModifyOptionGroupRequest(const ModifyOptionGroupRequest &other);
    ModifyOptionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
