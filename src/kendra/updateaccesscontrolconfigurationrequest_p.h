// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSCONTROLCONFIGURATIONREQUEST_P_H
#define QTAWS_UPDATEACCESSCONTROLCONFIGURATIONREQUEST_P_H

#include "kendrarequest_p.h"
#include "updateaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateAccessControlConfigurationRequest;

class UpdateAccessControlConfigurationRequestPrivate : public KendraRequestPrivate {

public:
    UpdateAccessControlConfigurationRequestPrivate(const KendraRequest::Action action,
                                   UpdateAccessControlConfigurationRequest * const q);
    UpdateAccessControlConfigurationRequestPrivate(const UpdateAccessControlConfigurationRequestPrivate &other,
                                   UpdateAccessControlConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
