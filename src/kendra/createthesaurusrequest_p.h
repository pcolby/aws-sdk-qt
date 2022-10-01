// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHESAURUSREQUEST_P_H
#define QTAWS_CREATETHESAURUSREQUEST_P_H

#include "kendrarequest_p.h"
#include "createthesaurusrequest.h"

namespace QtAws {
namespace Kendra {

class CreateThesaurusRequest;

class CreateThesaurusRequestPrivate : public KendraRequestPrivate {

public:
    CreateThesaurusRequestPrivate(const KendraRequest::Action action,
                                   CreateThesaurusRequest * const q);
    CreateThesaurusRequestPrivate(const CreateThesaurusRequestPrivate &other,
                                   CreateThesaurusRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThesaurusRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
