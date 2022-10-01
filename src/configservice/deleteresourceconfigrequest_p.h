// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCECONFIGREQUEST_P_H
#define QTAWS_DELETERESOURCECONFIGREQUEST_P_H

#include "configservicerequest_p.h"
#include "deleteresourceconfigrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteResourceConfigRequest;

class DeleteResourceConfigRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteResourceConfigRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteResourceConfigRequest * const q);
    DeleteResourceConfigRequestPrivate(const DeleteResourceConfigRequestPrivate &other,
                                   DeleteResourceConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourceConfigRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
