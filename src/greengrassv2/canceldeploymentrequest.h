// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELDEPLOYMENTREQUEST_H
#define QTAWS_CANCELDEPLOYMENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class CancelDeploymentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT CancelDeploymentRequest : public GreengrassV2Request {

public:
    CancelDeploymentRequest(const CancelDeploymentRequest &other);
    CancelDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelDeploymentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
