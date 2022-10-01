// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEFLEETREQUEST_P_H
#define QTAWS_MODIFYINSTANCEFLEETREQUEST_P_H

#include "emrrequest_p.h"
#include "modifyinstancefleetrequest.h"

namespace QtAws {
namespace Emr {

class ModifyInstanceFleetRequest;

class ModifyInstanceFleetRequestPrivate : public EmrRequestPrivate {

public:
    ModifyInstanceFleetRequestPrivate(const EmrRequest::Action action,
                                   ModifyInstanceFleetRequest * const q);
    ModifyInstanceFleetRequestPrivate(const ModifyInstanceFleetRequestPrivate &other,
                                   ModifyInstanceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstanceFleetRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
