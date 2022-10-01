// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEREQUEST_P_H
#define QTAWS_UPDATETEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "updatetemplaterequest.h"

namespace QtAws {
namespace Ses {

class UpdateTemplateRequest;

class UpdateTemplateRequestPrivate : public SesRequestPrivate {

public:
    UpdateTemplateRequestPrivate(const SesRequest::Action action,
                                   UpdateTemplateRequest * const q);
    UpdateTemplateRequestPrivate(const UpdateTemplateRequestPrivate &other,
                                   UpdateTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
