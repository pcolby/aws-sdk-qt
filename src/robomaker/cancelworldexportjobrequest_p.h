// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELWORLDEXPORTJOBREQUEST_P_H
#define QTAWS_CANCELWORLDEXPORTJOBREQUEST_P_H

#include "robomakerrequest_p.h"
#include "cancelworldexportjobrequest.h"

namespace QtAws {
namespace RoboMaker {

class CancelWorldExportJobRequest;

class CancelWorldExportJobRequestPrivate : public RoboMakerRequestPrivate {

public:
    CancelWorldExportJobRequestPrivate(const RoboMakerRequest::Action action,
                                   CancelWorldExportJobRequest * const q);
    CancelWorldExportJobRequestPrivate(const CancelWorldExportJobRequestPrivate &other,
                                   CancelWorldExportJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelWorldExportJobRequest)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
