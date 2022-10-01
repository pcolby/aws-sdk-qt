// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICEREQUEST_P_H
#define QTAWS_INITIALIZESERVICEREQUEST_P_H

#include "mgnrequest_p.h"
#include "initializeservicerequest.h"

namespace QtAws {
namespace Mgn {

class InitializeServiceRequest;

class InitializeServiceRequestPrivate : public MgnRequestPrivate {

public:
    InitializeServiceRequestPrivate(const MgnRequest::Action action,
                                   InitializeServiceRequest * const q);
    InitializeServiceRequestPrivate(const InitializeServiceRequestPrivate &other,
                                   InitializeServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitializeServiceRequest)

};

} // namespace Mgn
} // namespace QtAws

#endif
