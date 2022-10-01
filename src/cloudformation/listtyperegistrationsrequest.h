// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPEREGISTRATIONSREQUEST_H
#define QTAWS_LISTTYPEREGISTRATIONSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypeRegistrationsRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListTypeRegistrationsRequest : public CloudFormationRequest {

public:
    ListTypeRegistrationsRequest(const ListTypeRegistrationsRequest &other);
    ListTypeRegistrationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypeRegistrationsRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
