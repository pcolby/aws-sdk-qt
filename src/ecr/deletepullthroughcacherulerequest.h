// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPULLTHROUGHCACHERULEREQUEST_H
#define QTAWS_DELETEPULLTHROUGHCACHERULEREQUEST_H

#include "ecrrequest.h"

namespace QtAws {
namespace Ecr {

class DeletePullThroughCacheRuleRequestPrivate;

class QTAWSECR_EXPORT DeletePullThroughCacheRuleRequest : public EcrRequest {

public:
    DeletePullThroughCacheRuleRequest(const DeletePullThroughCacheRuleRequest &other);
    DeletePullThroughCacheRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePullThroughCacheRuleRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
