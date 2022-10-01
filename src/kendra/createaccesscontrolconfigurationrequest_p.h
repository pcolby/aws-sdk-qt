// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSCONTROLCONFIGURATIONREQUEST_P_H
#define QTAWS_CREATEACCESSCONTROLCONFIGURATIONREQUEST_P_H

#include "kendrarequest_p.h"
#include "createaccesscontrolconfigurationrequest.h"

namespace QtAws {
namespace Kendra {

class CreateAccessControlConfigurationRequest;

class CreateAccessControlConfigurationRequestPrivate : public KendraRequestPrivate {

public:
    CreateAccessControlConfigurationRequestPrivate(const KendraRequest::Action action,
                                   CreateAccessControlConfigurationRequest * const q);
    CreateAccessControlConfigurationRequestPrivate(const CreateAccessControlConfigurationRequestPrivate &other,
                                   CreateAccessControlConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessControlConfigurationRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
