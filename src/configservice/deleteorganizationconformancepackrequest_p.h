// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFORMANCEPACKREQUEST_P_H
#define QTAWS_DELETEORGANIZATIONCONFORMANCEPACKREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteorganizationconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConformancePackRequest;

class DeleteOrganizationConformancePackRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteOrganizationConformancePackRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteOrganizationConformancePackRequest * const q);
    DeleteOrganizationConformancePackRequestPrivate(const DeleteOrganizationConformancePackRequestPrivate &other,
                                   DeleteOrganizationConformancePackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteOrganizationConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
