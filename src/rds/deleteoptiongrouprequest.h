// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOPTIONGROUPREQUEST_H
#define QTAWS_DELETEOPTIONGROUPREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class DeleteOptionGroupRequestPrivate;

class QTAWSRDS_EXPORT DeleteOptionGroupRequest : public RdsRequest {

public:
    DeleteOptionGroupRequest(const DeleteOptionGroupRequest &other);
    DeleteOptionGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOptionGroupRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
