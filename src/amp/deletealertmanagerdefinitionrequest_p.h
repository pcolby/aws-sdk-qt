// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTMANAGERDEFINITIONREQUEST_P_H
#define QTAWS_DELETEALERTMANAGERDEFINITIONREQUEST_P_H

#include "amprequest_p.h"
#include "deletealertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class DeleteAlertManagerDefinitionRequest;

class DeleteAlertManagerDefinitionRequestPrivate : public AmpRequestPrivate {

public:
    DeleteAlertManagerDefinitionRequestPrivate(const AmpRequest::Action action,
                                   DeleteAlertManagerDefinitionRequest * const q);
    DeleteAlertManagerDefinitionRequestPrivate(const DeleteAlertManagerDefinitionRequestPrivate &other,
                                   DeleteAlertManagerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
