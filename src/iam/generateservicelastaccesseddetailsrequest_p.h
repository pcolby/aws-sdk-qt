// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_P_H
#define QTAWS_GENERATESERVICELASTACCESSEDDETAILSREQUEST_P_H

#include "iamrequest_p.h"
#include "generateservicelastaccesseddetailsrequest.h"

namespace QtAws {
namespace Iam {

class GenerateServiceLastAccessedDetailsRequest;

class GenerateServiceLastAccessedDetailsRequestPrivate : public IamRequestPrivate {

public:
    GenerateServiceLastAccessedDetailsRequestPrivate(const IamRequest::Action action,
                                   GenerateServiceLastAccessedDetailsRequest * const q);
    GenerateServiceLastAccessedDetailsRequestPrivate(const GenerateServiceLastAccessedDetailsRequestPrivate &other,
                                   GenerateServiceLastAccessedDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GenerateServiceLastAccessedDetailsRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
