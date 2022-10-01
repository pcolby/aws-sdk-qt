// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETREQUEST_P_H

#include "sesrequest_p.h"
#include "deleteconfigurationsetrequest.h"

namespace QtAws {
namespace Ses {

class DeleteConfigurationSetRequest;

class DeleteConfigurationSetRequestPrivate : public SesRequestPrivate {

public:
    DeleteConfigurationSetRequestPrivate(const SesRequest::Action action,
                                   DeleteConfigurationSetRequest * const q);
    DeleteConfigurationSetRequestPrivate(const DeleteConfigurationSetRequestPrivate &other,
                                   DeleteConfigurationSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
