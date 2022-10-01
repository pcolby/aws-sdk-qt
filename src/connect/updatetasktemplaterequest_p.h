// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETASKTEMPLATEREQUEST_P_H
#define QTAWS_UPDATETASKTEMPLATEREQUEST_P_H

#include "connectrequest_p.h"
#include "updatetasktemplaterequest.h"

namespace QtAws {
namespace Connect {

class UpdateTaskTemplateRequest;

class UpdateTaskTemplateRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateTaskTemplateRequestPrivate(const ConnectRequest::Action action,
                                   UpdateTaskTemplateRequest * const q);
    UpdateTaskTemplateRequestPrivate(const UpdateTaskTemplateRequestPrivate &other,
                                   UpdateTaskTemplateRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTaskTemplateRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
