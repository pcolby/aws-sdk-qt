// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELENSVERSIONREQUEST_P_H
#define QTAWS_CREATELENSVERSIONREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "createlensversionrequest.h"

namespace QtAws {
namespace WellArchitected {

class CreateLensVersionRequest;

class CreateLensVersionRequestPrivate : public WellArchitectedRequestPrivate {

public:
    CreateLensVersionRequestPrivate(const WellArchitectedRequest::Action action,
                                   CreateLensVersionRequest * const q);
    CreateLensVersionRequestPrivate(const CreateLensVersionRequestPrivate &other,
                                   CreateLensVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLensVersionRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
