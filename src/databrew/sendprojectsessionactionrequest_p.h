// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDPROJECTSESSIONACTIONREQUEST_P_H
#define QTAWS_SENDPROJECTSESSIONACTIONREQUEST_P_H

#include "databrewrequest_p.h"
#include "sendprojectsessionactionrequest.h"

namespace QtAws {
namespace DataBrew {

class SendProjectSessionActionRequest;

class SendProjectSessionActionRequestPrivate : public DataBrewRequestPrivate {

public:
    SendProjectSessionActionRequestPrivate(const DataBrewRequest::Action action,
                                   SendProjectSessionActionRequest * const q);
    SendProjectSessionActionRequestPrivate(const SendProjectSessionActionRequestPrivate &other,
                                   SendProjectSessionActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendProjectSessionActionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
