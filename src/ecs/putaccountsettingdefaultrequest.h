// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGDEFAULTREQUEST_H
#define QTAWS_PUTACCOUNTSETTINGDEFAULTREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingDefaultRequestPrivate;

class QTAWSECS_EXPORT PutAccountSettingDefaultRequest : public EcsRequest {

public:
    PutAccountSettingDefaultRequest(const PutAccountSettingDefaultRequest &other);
    PutAccountSettingDefaultRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAccountSettingDefaultRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
