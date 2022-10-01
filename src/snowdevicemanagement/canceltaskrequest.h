// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELTASKREQUEST_H
#define QTAWS_CANCELTASKREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CancelTaskRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT CancelTaskRequest : public SnowDeviceManagementRequest {

public:
    CancelTaskRequest(const CancelTaskRequest &other);
    CancelTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelTaskRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
