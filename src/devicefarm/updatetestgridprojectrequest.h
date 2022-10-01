// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETESTGRIDPROJECTREQUEST_H
#define QTAWS_UPDATETESTGRIDPROJECTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class UpdateTestGridProjectRequestPrivate;

class QTAWSDEVICEFARM_EXPORT UpdateTestGridProjectRequest : public DeviceFarmRequest {

public:
    UpdateTestGridProjectRequest(const UpdateTestGridProjectRequest &other);
    UpdateTestGridProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
