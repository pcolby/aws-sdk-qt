// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCERTIFICATESREQUEST_P_H
#define QTAWS_MODIFYCERTIFICATESREQUEST_P_H

#include "rdsrequest_p.h"
#include "modifycertificatesrequest.h"

namespace QtAws {
namespace Rds {

class ModifyCertificatesRequest;

class ModifyCertificatesRequestPrivate : public RdsRequestPrivate {

public:
    ModifyCertificatesRequestPrivate(const RdsRequest::Action action,
                                   ModifyCertificatesRequest * const q);
    ModifyCertificatesRequestPrivate(const ModifyCertificatesRequestPrivate &other,
                                   ModifyCertificatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyCertificatesRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
