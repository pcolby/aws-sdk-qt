// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIENCEREQUEST_P_H
#define QTAWS_CREATEEXPERIENCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "createexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class CreateExperienceRequest;

class CreateExperienceRequestPrivate : public KendraRequestPrivate {

public:
    CreateExperienceRequestPrivate(const KendraRequest::Action action,
                                   CreateExperienceRequest * const q);
    CreateExperienceRequestPrivate(const CreateExperienceRequestPrivate &other,
                                   CreateExperienceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
