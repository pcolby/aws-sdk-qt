// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETANSWERREQUEST_P_H
#define QTAWS_GETANSWERREQUEST_P_H

#include "wellarchitectedrequest_p.h"
#include "getanswerrequest.h"

namespace QtAws {
namespace WellArchitected {

class GetAnswerRequest;

class GetAnswerRequestPrivate : public WellArchitectedRequestPrivate {

public:
    GetAnswerRequestPrivate(const WellArchitectedRequest::Action action,
                                   GetAnswerRequest * const q);
    GetAnswerRequestPrivate(const GetAnswerRequestPrivate &other,
                                   GetAnswerRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAnswerRequest)

};

} // namespace WellArchitected
} // namespace QtAws

#endif
