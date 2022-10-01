// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEANSWERREQUEST_P_H
#define QTAWS_UPDATEANSWERREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "updateanswerrequest.h"

namespace QtAws {
namespace WellArchitected {

class UpdateAnswerRequest;

class UpdateAnswerRequestPrivate : public WellArchitectedRequestPrivate {

public:
    UpdateAnswerRequestPrivate(const WellArchitectedRequest::Action action,
                                   UpdateAnswerRequest * const q);
    UpdateAnswerRequestPrivate(const UpdateAnswerRequestPrivate &other,
                                   UpdateAnswerRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAnswerRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
