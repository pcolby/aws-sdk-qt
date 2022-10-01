// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWREQUEST_H
#define QTAWS_GETWORKFLOWREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetWorkflowRequest : public CustomerProfilesRequest {

public:
    GetWorkflowRequest(const GetWorkflowRequest &other);
    GetWorkflowRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
