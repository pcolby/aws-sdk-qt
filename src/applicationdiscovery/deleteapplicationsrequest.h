// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPLICATIONSREQUEST_H
#define QTAWS_DELETEAPPLICATIONSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DeleteApplicationsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DeleteApplicationsRequest : public ApplicationDiscoveryRequest {

public:
    DeleteApplicationsRequest(const DeleteApplicationsRequest &other);
    DeleteApplicationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApplicationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
