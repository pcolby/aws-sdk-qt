// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHESAURUSREQUEST_P_H
#define QTAWS_UPDATETHESAURUSREQUEST_P_H

#include "kendrarequest_p.h"
#include "updatethesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class UpdateThesaurusRequest;

class UpdateThesaurusRequestPrivate : public KendraRequestPrivate {

public:
    UpdateThesaurusRequestPrivate(const KendraRequest::Action action,
                                   UpdateThesaurusRequest * const q);
    UpdateThesaurusRequestPrivate(const UpdateThesaurusRequestPrivate &other,
                                   UpdateThesaurusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
