// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETQUALIFICATIONSCOREREQUEST_P_H
#define QTAWS_GETQUALIFICATIONSCOREREQUEST_P_H

#include "mturkrequest_p.h"
#include "getqualificationscorerequest.h"

namespace QtAws {
namespace MTurk {

class GetQualificationScoreRequest;

class GetQualificationScoreRequestPrivate : public MTurkRequestPrivate {

public:
    GetQualificationScoreRequestPrivate(const MTurkRequest::Action action,
                                   GetQualificationScoreRequest * const q);
    GetQualificationScoreRequestPrivate(const GetQualificationScoreRequestPrivate &other,
                                   GetQualificationScoreRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQualificationScoreRequest)

};

} // namespace MTurk
} // namespace QtAws

#endif
