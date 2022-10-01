// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETASKTEMPLATEREQUEST_P_H
#define QTAWS_DELETETASKTEMPLATEREQUEST_P_H

#include "connectrequest_p.h"
#include "deletetasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class DeleteTaskTemplateRequest;

class DeleteTaskTemplateRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteTaskTemplateRequestPrivate(const ConnectRequest::Action action,
                                   DeleteTaskTemplateRequest * const q);
    DeleteTaskTemplateRequestPrivate(const DeleteTaskTemplateRequestPrivate &other,
                                   DeleteTaskTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
