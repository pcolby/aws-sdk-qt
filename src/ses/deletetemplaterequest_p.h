// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATEREQUEST_P_H
#define QTAWS_DELETETEMPLATEREQUEST_P_H

#include "sesrequest_p.h"
#include "deletetemplaterequest.h"

namespace QtAws {
namespace Ses {

class DeleteTemplateRequest;

class DeleteTemplateRequestPrivate : public SesRequestPrivate {

public:
    DeleteTemplateRequestPrivate(const SesRequest::Action action,
                                   DeleteTemplateRequest * const q);
    DeleteTemplateRequestPrivate(const DeleteTemplateRequestPrivate &other,
                                   DeleteTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
