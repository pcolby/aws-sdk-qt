// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMULTIREGIONACCESSPOINTREQUEST_H
#define QTAWS_CREATEMULTIREGIONACCESSPOINTREQUEST_H

#include "s3controlrequest.h"

namespace QtAws {
namespace S3Control {

class CreateMultiRegionAccessPointRequestPrivate;

class QTAWSS3CONTROL_EXPORT CreateMultiRegionAccessPointRequest : public S3ControlRequest {

public:
    CreateMultiRegionAccessPointRequest(const CreateMultiRegionAccessPointRequest &other);
    CreateMultiRegionAccessPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMultiRegionAccessPointRequest)

};

} // namespace S3Control
} // namespace QtAws

#endif
