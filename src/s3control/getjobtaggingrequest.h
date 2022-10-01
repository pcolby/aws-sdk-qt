// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBTAGGINGREQUEST_H
#define QTAWS_GETJOBTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetJobTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetJobTaggingRequest : public S3ControlRequest {

public:
    GetJobTaggingRequest(const GetJobTaggingRequest &other);
    GetJobTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
