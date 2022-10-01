// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPSLISTREQUEST_H
#define QTAWS_PUTAPPSLISTREQUEST_H

#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class PutAppsListRequestPrivate;

class QTAWSFMS_EXPORT PutAppsListRequest : public FmsRequest {

public:
    PutAppsListRequest(const PutAppsListRequest &other);
    PutAppsListRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
