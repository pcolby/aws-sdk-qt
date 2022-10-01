// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCESSPOINTREQUEST_H
#define QTAWS_GETACCESSPOINTREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class GetAccessPointRequestPrivate;

class QTAWSS3CONTROL_EXPORT GetAccessPointRequest : public S3ControlRequest {

public:
    GetAccessPointRequest(const GetAccessPointRequest &other);
    GetAccessPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
