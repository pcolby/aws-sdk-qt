// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTJOBTAGGINGREQUEST_H
#define QTAWS_PUTJOBTAGGINGREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class PutJobTaggingRequestPrivate;

class QTAWSS3CONTROL_EXPORT PutJobTaggingRequest : public S3ControlRequest {

public:
    PutJobTaggingRequest(const PutJobTaggingRequest &other);
    PutJobTaggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutJobTaggingRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
