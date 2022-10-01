// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWORKFLOWSTEPSREQUEST_H
#define QTAWS_GETWORKFLOWSTEPSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetWorkflowStepsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT GetWorkflowStepsRequest : public CustomerProfilesRequest {

public:
    GetWorkflowStepsRequest(const GetWorkflowStepsRequest &other);
    GetWorkflowStepsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWorkflowStepsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
