// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFAQREQUEST_P_H
#define QTAWS_CREATEFAQREQUEST_P_H

#include "kendrarequest_p.h"
#include "createfaqrequest.h"

namespace QtAws {
namespace Kendra {

class CreateFaqRequest;

class CreateFaqRequestPrivate : public KendraRequestPrivate {

public:
    CreateFaqRequestPrivate(const KendraRequest::Action action,
                                   CreateFaqRequest * const q);
    CreateFaqRequestPrivate(const CreateFaqRequestPrivate &other,
                                   CreateFaqRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFaqRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
