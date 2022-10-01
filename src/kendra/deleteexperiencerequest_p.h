// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEXPERIENCEREQUEST_P_H
#define QTAWS_DELETEEXPERIENCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "deleteexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DeleteExperienceRequest;

class DeleteExperienceRequestPrivate : public KendraRequestPrivate {

public:
    DeleteExperienceRequestPrivate(const KendraRequest::Action action,
                                   DeleteExperienceRequest * const q);
    DeleteExperienceRequestPrivate(const DeleteExperienceRequestPrivate &other,
                                   DeleteExperienceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
