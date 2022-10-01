// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSPOLICYREQUEST_H
#define QTAWS_UPDATEACCESSPOLICYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAccessPolicyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT UpdateAccessPolicyRequest : public IoTSiteWiseRequest {

public:
    UpdateAccessPolicyRequest(const UpdateAccessPolicyRequest &other);
    UpdateAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
