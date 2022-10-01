// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_H
#define QTAWS_TAGRESOURCEREQUEST_H

#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class TagResourceRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT TagResourceRequest : public Route53RecoveryReadinessRequest {

public:
    TagResourceRequest(const TagResourceRequest &other);
    TagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
