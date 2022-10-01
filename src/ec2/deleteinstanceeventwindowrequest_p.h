// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSTANCEEVENTWINDOWREQUEST_P_H
#define QTAWS_DELETEINSTANCEEVENTWINDOWREQUEST_P_H

#include "ec2request_p.h"
#include "deleteinstanceeventwindowrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteInstanceEventWindowRequest;

class DeleteInstanceEventWindowRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteInstanceEventWindowRequestPrivate(const Ec2Request::Action action,
                                   DeleteInstanceEventWindowRequest * const q);
    DeleteInstanceEventWindowRequestPrivate(const DeleteInstanceEventWindowRequestPrivate &other,
                                   DeleteInstanceEventWindowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteInstanceEventWindowRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
