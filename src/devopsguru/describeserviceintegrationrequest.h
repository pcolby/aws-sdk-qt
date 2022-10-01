// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEINTEGRATIONREQUEST_H
#define QTAWS_DESCRIBESERVICEINTEGRATIONREQUEST_H

#include "devopsgururequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeServiceIntegrationRequestPrivate;

class QTAWSDEVOPSGURU_EXPORT DescribeServiceIntegrationRequest : public DevOpsGuruRequest {

public:
    DescribeServiceIntegrationRequest(const DescribeServiceIntegrationRequest &other);
    DescribeServiceIntegrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServiceIntegrationRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
