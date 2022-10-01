// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSLISTREQUEST_H
#define QTAWS_GETAPPSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class GetAppsListRequestPrivate;

class QTAWSFMS_EXPORT GetAppsListRequest : public FmsRequest {

public:
    GetAppsListRequest(const GetAppsListRequest &other);
    GetAppsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
