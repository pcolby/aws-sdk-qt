// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOLICYREQUEST_H
#define QTAWS_DELETEACCESSPOLICYREQUEST_H

#include "iotsitewiserequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAccessPolicyRequestPrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteAccessPolicyRequest : public IoTSiteWiseRequest {

public:
    DeleteAccessPolicyRequest(const DeleteAccessPolicyRequest &other);
    DeleteAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
