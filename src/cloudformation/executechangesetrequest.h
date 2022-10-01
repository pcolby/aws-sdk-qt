// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECHANGESETREQUEST_H
#define QTAWS_EXECUTECHANGESETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ExecuteChangeSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ExecuteChangeSetRequest : public CloudFormationRequest {

public:
    ExecuteChangeSetRequest(const ExecuteChangeSetRequest &other);
    ExecuteChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
