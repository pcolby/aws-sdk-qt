// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFORMANCEPACKREQUEST_P_H
#define QTAWS_DELETECONFORMANCEPACKREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteconformancepackrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConformancePackRequest;

class DeleteConformancePackRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteConformancePackRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteConformancePackRequest * const q);
    DeleteConformancePackRequestPrivate(const DeleteConformancePackRequestPrivate &other,
                                   DeleteConformancePackRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConformancePackRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
