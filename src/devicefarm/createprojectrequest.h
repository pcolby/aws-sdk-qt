// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROJECTREQUEST_H
#define QTAWS_CREATEPROJECTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class CreateProjectRequestPrivate;

class QTAWSDEVICEFARM_EXPORT CreateProjectRequest : public DeviceFarmRequest {

public:
    CreateProjectRequest(const CreateProjectRequest &other);
    CreateProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
