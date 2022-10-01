// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAINTENANCEWINDOWTASKREQUEST_H
#define QTAWS_GETMAINTENANCEWINDOWTASKREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class GetMaintenanceWindowTaskRequestPrivate;

class QTAWSSSM_EXPORT GetMaintenanceWindowTaskRequest : public SsmRequest {

public:
    GetMaintenanceWindowTaskRequest(const GetMaintenanceWindowTaskRequest &other);
    GetMaintenanceWindowTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMaintenanceWindowTaskRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
