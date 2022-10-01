// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECORDHANDLERPROGRESSREQUEST_H
#define QTAWS_RECORDHANDLERPROGRESSREQUEST_H

#include "cloudformationrequest.h"

namespace QtAws {
namespace CloudFormation {

class RecordHandlerProgressRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT RecordHandlerProgressRequest : public CloudFormationRequest {

public:
    RecordHandlerProgressRequest(const RecordHandlerProgressRequest &other);
    RecordHandlerProgressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RecordHandlerProgressRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
