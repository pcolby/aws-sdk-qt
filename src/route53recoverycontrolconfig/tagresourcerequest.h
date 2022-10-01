// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_H
#define QTAWS_TAGRESOURCEREQUEST_H

#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class TagResourceRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT TagResourceRequest : public Route53RecoveryControlConfigRequest {

public:
    TagResourceRequest(const TagResourceRequest &other);
    TagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
