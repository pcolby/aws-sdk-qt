// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOLICYREQUEST_H
#define QTAWS_CREATEACCESSPOLICYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAccessPolicyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT CreateAccessPolicyRequest : public IoTSiteWiseRequest {

public:
    CreateAccessPolicyRequest(const CreateAccessPolicyRequest &other);
    CreateAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
