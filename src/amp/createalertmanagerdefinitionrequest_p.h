// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTMANAGERDEFINITIONREQUEST_P_H
#define QTAWS_CREATEALERTMANAGERDEFINITIONREQUEST_P_H

#include "amprequest_p.h"
#include "createalertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class CreateAlertManagerDefinitionRequest;

class CreateAlertManagerDefinitionRequestPrivate : public AmpRequestPrivate {

public:
    CreateAlertManagerDefinitionRequestPrivate(const AmpRequest::Action action,
                                   CreateAlertManagerDefinitionRequest * const q);
    CreateAlertManagerDefinitionRequestPrivate(const CreateAlertManagerDefinitionRequestPrivate &other,
                                   CreateAlertManagerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
