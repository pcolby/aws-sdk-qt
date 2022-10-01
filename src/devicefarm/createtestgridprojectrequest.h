// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETESTGRIDPROJECTREQUEST_H
#define QTAWS_CREATETESTGRIDPROJECTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateTestGridProjectRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateTestGridProjectRequest : public DeviceFarmRequest {

public:
    CreateTestGridProjectRequest(const CreateTestGridProjectRequest &other);
    CreateTestGridProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
