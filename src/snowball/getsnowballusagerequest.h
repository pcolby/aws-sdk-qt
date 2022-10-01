// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNOWBALLUSAGEREQUEST_H
#define QTAWS_GETSNOWBALLUSAGEREQUEST_H

#include "snowballrequest.h"

namespace QtAws {
namespace Snowball {

class GetSnowballUsageRequestPrivate;

class QTAWSSNOWBALL_EXPORT GetSnowballUsageRequest : public SnowballRequest {

public:
    GetSnowballUsageRequest(const GetSnowballUsageRequest &other);
    GetSnowballUsageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnowballUsageRequest)

};

} // namespace Snowball
} // namespace QtAws

#endif
