// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZECLUSTERREQUEST_H
#define QTAWS_INITIALIZECLUSTERREQUEST_H

#include "cloudhsmv2request.h"

namespace QtAws {
namespace CloudHsmV2 {

class InitializeClusterRequestPrivate;

class QTAWSCLOUDHSMV2_EXPORT InitializeClusterRequest : public CloudHsmV2Request {

public:
    InitializeClusterRequest(const InitializeClusterRequest &other);
    InitializeClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitializeClusterRequest)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
