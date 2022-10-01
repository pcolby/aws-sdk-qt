// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTACKSREQUEST_H
#define QTAWS_LISTSTACKSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListStacksRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListStacksRequest : public CloudFormationRequest {

public:
    ListStacksRequest(const ListStacksRequest &other);
    ListStacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStacksRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
