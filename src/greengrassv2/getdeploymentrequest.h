// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYMENTREQUEST_H
#define QTAWS_GETDEPLOYMENTREQUEST_H

#include "greengrassv2request.h"

namespace QtAws {
namespace GreengrassV2 {

class GetDeploymentRequestPrivate;

class QTAWSGREENGRASSV2_EXPORT GetDeploymentRequest : public GreengrassV2Request {

public:
    GetDeploymentRequest(const GetDeploymentRequest &other);
    GetDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeploymentRequest)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
