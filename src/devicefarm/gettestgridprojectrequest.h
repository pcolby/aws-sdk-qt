// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDPROJECTREQUEST_H
#define QTAWS_GETTESTGRIDPROJECTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridProjectRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetTestGridProjectRequest : public DeviceFarmRequest {

public:
    GetTestGridProjectRequest(const GetTestGridProjectRequest &other);
    GetTestGridProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestGridProjectRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
