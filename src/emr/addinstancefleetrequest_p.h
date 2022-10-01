// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDINSTANCEFLEETREQUEST_P_H
#define QTAWS_ADDINSTANCEFLEETREQUEST_P_H

#include "emrrequest_p.h"
#include "addinstancefleetrequest.h"

namespace QtAws {
namespace Emr {

class AddInstanceFleetRequest;

class AddInstanceFleetRequestPrivate : public EmrRequestPrivate {

public:
    AddInstanceFleetRequestPrivate(const EmrRequest::Action action,
                                   AddInstanceFleetRequest * const q);
    AddInstanceFleetRequestPrivate(const AddInstanceFleetRequestPrivate &other,
                                   AddInstanceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddInstanceFleetRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
