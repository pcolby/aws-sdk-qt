// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAREQUEST_P_H
#define QTAWS_DELETESCHEMAREQUEST_P_H

#include "personalizerequest_p.h"
#include "deleteschemarequest.h"

namespace QtAws {
namespace Personalize {

class DeleteSchemaRequest;

class DeleteSchemaRequestPrivate : public PersonalizeRequestPrivate {

public:
    DeleteSchemaRequestPrivate(const PersonalizeRequest::Action action,
                                   DeleteSchemaRequest * const q);
    DeleteSchemaRequestPrivate(const DeleteSchemaRequestPrivate &other,
                                   DeleteSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSchemaRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
