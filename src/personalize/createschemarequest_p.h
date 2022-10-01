// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_P_H
#define QTAWS_CREATESCHEMAREQUEST_P_H

#include "personalizerequest_p.h"
#include "createschemarequest.h"

namespace QtAws {
namespace Personalize {

class CreateSchemaRequest;

class CreateSchemaRequestPrivate : public PersonalizeRequestPrivate {

public:
    CreateSchemaRequestPrivate(const PersonalizeRequest::Action action,
                                   CreateSchemaRequest * const q);
    CreateSchemaRequestPrivate(const CreateSchemaRequestPrivate &other,
                                   CreateSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSchemaRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
