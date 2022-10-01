// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSCONTROLCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEACCESSCONTROLCONFIGURATIONREQUEST_P_H

#include "kendrarequest_p.h"
#include "deleteaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class DeleteAccessControlConfigurationRequest;

class DeleteAccessControlConfigurationRequestPrivate : public KendraRequestPrivate {

public:
    DeleteAccessControlConfigurationRequestPrivate(const KendraRequest::Action action,
                                   DeleteAccessControlConfigurationRequest * const q);
    DeleteAccessControlConfigurationRequestPrivate(const DeleteAccessControlConfigurationRequestPrivate &other,
                                   DeleteAccessControlConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
