// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUITEREQUEST_H
#define QTAWS_GETSUITEREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetSuiteRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetSuiteRequest : public DeviceFarmRequest {

public:
    GetSuiteRequest(const GetSuiteRequest &other);
    GetSuiteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSuiteRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
