// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALERTMANAGERDEFINITIONREQUEST_P_H
#define QTAWS_PUTALERTMANAGERDEFINITIONREQUEST_P_H

#include "amprequest_p.h"
#include "putalertmanagerdefinitionrequest.h"

namespace QtAws {
namespace Amp {

class PutAlertManagerDefinitionRequest;

class PutAlertManagerDefinitionRequestPrivate : public AmpRequestPrivate {

public:
    PutAlertManagerDefinitionRequestPrivate(const AmpRequest::Action action,
                                   PutAlertManagerDefinitionRequest * const q);
    PutAlertManagerDefinitionRequestPrivate(const PutAlertManagerDefinitionRequestPrivate &other,
                                   PutAlertManagerDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAlertManagerDefinitionRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
