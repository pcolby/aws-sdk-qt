// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBULKDEPLOYMENTREQUEST_H
#define QTAWS_STARTBULKDEPLOYMENTREQUEST_H

#include "greengrassrequest.h"

namespace QtAws {
namespace Greengrass {

class StartBulkDeploymentRequestPrivate;

class QTAWSGREENGRASS_EXPORT StartBulkDeploymentRequest : public GreengrassRequest {

public:
    StartBulkDeploymentRequest(const StartBulkDeploymentRequest &other);
    StartBulkDeploymentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBulkDeploymentRequest)

};

} // namespace Greengrass
} // namespace QtAws

#endif
