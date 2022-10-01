// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYDOMAINDKIMREQUEST_P_H
#define QTAWS_VERIFYDOMAINDKIMREQUEST_P_H

#include "sesrequest_p.h"
#include "verifydomaindkimrequest.h"

namespace QtAws {
namespace Ses {

class VerifyDomainDkimRequest;

class VerifyDomainDkimRequestPrivate : public SesRequestPrivate {

public:
    VerifyDomainDkimRequestPrivate(const SesRequest::Action action,
                                   VerifyDomainDkimRequest * const q);
    VerifyDomainDkimRequestPrivate(const VerifyDomainDkimRequestPrivate &other,
                                   VerifyDomainDkimRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyDomainDkimRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
