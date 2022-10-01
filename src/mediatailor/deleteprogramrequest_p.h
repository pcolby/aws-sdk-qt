// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROGRAMREQUEST_P_H
#define QTAWS_DELETEPROGRAMREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "deleteprogramrequest.h"

namespace QtAws {
namespace MediaTailor {

class DeleteProgramRequest;

class DeleteProgramRequestPrivate : public MediaTailorRequestPrivate {

public:
    DeleteProgramRequestPrivate(const MediaTailorRequest::Action action,
                                   DeleteProgramRequest * const q);
    DeleteProgramRequestPrivate(const DeleteProgramRequestPrivate &other,
                                   DeleteProgramRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProgramRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
