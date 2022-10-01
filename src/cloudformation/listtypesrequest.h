// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTYPESREQUEST_H
#define QTAWS_LISTTYPESREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class ListTypesRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT ListTypesRequest : public CloudFormationRequest {

public:
    ListTypesRequest(const ListTypesRequest &other);
    ListTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTypesRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
