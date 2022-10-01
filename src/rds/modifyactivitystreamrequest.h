// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACTIVITYSTREAMREQUEST_H
#define QTAWS_MODIFYACTIVITYSTREAMREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class ModifyActivityStreamRequestPrivate;

class QTAWSRDS_EXPORT ModifyActivityStreamRequest : public RdsRequest {

public:
    ModifyActivityStreamRequest(const ModifyActivityStreamRequest &other);
    ModifyActivityStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyActivityStreamRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
