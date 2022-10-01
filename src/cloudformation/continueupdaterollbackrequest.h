// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTINUEUPDATEROLLBACKREQUEST_H
#define QTAWS_CONTINUEUPDATEROLLBACKREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ContinueUpdateRollbackRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ContinueUpdateRollbackRequest : public CloudFormationRequest {

public:
    ContinueUpdateRollbackRequest(const ContinueUpdateRollbackRequest &other);
    ContinueUpdateRollbackRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ContinueUpdateRollbackRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
