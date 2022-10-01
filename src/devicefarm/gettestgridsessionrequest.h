// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDSESSIONREQUEST_H
#define QTAWS_GETTESTGRIDSESSIONREQUEST_H

#include "devicefarmrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridSessionRequestPrivate;

class QTAWSDEVICEFARM_EXPORT GetTestGridSessionRequest : public DeviceFarmRequest {

public:
    GetTestGridSessionRequest(const GetTestGridSessionRequest &other);
    GetTestGridSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestGridSessionRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
