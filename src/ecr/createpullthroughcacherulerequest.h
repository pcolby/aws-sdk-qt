// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPULLTHROUGHCACHERULEREQUEST_H
#define QTAWS_CREATEPULLTHROUGHCACHERULEREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class CreatePullThroughCacheRuleRequestPrivate;

class QTAWSECR_EXPORT CreatePullThroughCacheRuleRequest : public EcrRequest {

public:
    CreatePullThroughCacheRuleRequest(const CreatePullThroughCacheRuleRequest &other);
    CreatePullThroughCacheRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePullThroughCacheRuleRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
