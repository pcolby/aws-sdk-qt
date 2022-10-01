// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSETSREQUEST_H
#define QTAWS_LISTSTACKSETSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStackSetsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStackSetsRequest : public CloudFormationRequest {

public:
    ListStackSetsRequest(const ListStackSetsRequest &other);
    ListStackSetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStackSetsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
