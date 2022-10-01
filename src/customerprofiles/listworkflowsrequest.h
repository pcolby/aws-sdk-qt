// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTWORKFLOWSREQUEST_H
#define QTAWS_LISTWORKFLOWSREQUEST_H

#include "customerprofilesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListWorkflowsRequestPrivate;

class QTAWSCUSTOMERPROFILES_EXPORT ListWorkflowsRequest : public CustomerProfilesRequest {

public:
    ListWorkflowsRequest(const ListWorkflowsRequest &other);
    ListWorkflowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListWorkflowsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
