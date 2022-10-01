// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANGESETREQUEST_H
#define QTAWS_DELETECHANGESETREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class DeleteChangeSetRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT DeleteChangeSetRequest : public CloudFormationRequest {

public:
    DeleteChangeSetRequest(const DeleteChangeSetRequest &other);
    DeleteChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteChangeSetRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
