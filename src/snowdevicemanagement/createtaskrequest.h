// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKREQUEST_H
#define QTAWS_CREATETASKREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class CreateTaskRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT CreateTaskRequest : public SnowDeviceManagementRequest {

public:
    CreateTaskRequest(const CreateTaskRequest &other);
    CreateTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTaskRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
