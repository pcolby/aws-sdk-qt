// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETASKTEMPLATEREQUEST_P_H
#define QTAWS_CREATETASKTEMPLATEREQUEST_P_H

#include "connectrequest_p.h"
#include "createtasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class CreateTaskTemplateRequest;

class CreateTaskTemplateRequestPrivate : public ConnectRequestPrivate {

public:
    CreateTaskTemplateRequestPrivate(const ConnectRequest::Action action,
                                   CreateTaskTemplateRequest * const q);
    CreateTaskTemplateRequestPrivate(const CreateTaskTemplateRequestPrivate &other,
                                   CreateTaskTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
