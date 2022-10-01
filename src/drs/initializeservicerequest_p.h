// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIALIZESERVICEREQUEST_P_H
#define QTAWS_INITIALIZESERVICEREQUEST_P_H

#include "drsrequest_p.h"
#include "initializeservicerequest.h"

namespace QtAws {
namespace Drs {

class InitializeServiceRequest;

class InitializeServiceRequestPrivate : public DrsRequestPrivate {

public:
    InitializeServiceRequestPrivate(const DrsRequest::Action action,
                                   InitializeServiceRequest * const q);
    InitializeServiceRequestPrivate(const InitializeServiceRequestPrivate &other,
                                   InitializeServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(InitializeServiceRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
