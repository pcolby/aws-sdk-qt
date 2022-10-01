// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTPROJECTSESSIONREQUEST_P_H
#define QTAWS_STARTPROJECTSESSIONREQUEST_P_H

#include "databrewrequest_p.h"
#include "startprojectsessionrequest.h"

namespace QtAws {
namespace DataBrew {

class StartProjectSessionRequest;

class StartProjectSessionRequestPrivate : public DataBrewRequestPrivate {

public:
    StartProjectSessionRequestPrivate(const DataBrewRequest::Action action,
                                   StartProjectSessionRequest * const q);
    StartProjectSessionRequestPrivate(const StartProjectSessionRequestPrivate &other,
                                   StartProjectSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartProjectSessionRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
