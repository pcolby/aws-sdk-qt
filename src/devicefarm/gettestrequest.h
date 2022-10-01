// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTREQUEST_H
#define QTAWS_GETTESTREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetTestRequest : public DeviceFarmRequest {

public:
    GetTestRequest(const GetTestRequest &other);
    GetTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
