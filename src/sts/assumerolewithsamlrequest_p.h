// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSUMEROLEWITHSAMLREQUEST_P_H
#define QTAWS_ASSUMEROLEWITHSAMLREQUEST_P_H

#include "stsrequest_p.h"
#include "assumerolewithsamlrequest.h"

namespace QtAws {
namespace Sts {

class AssumeRoleWithSAMLRequest;

class AssumeRoleWithSAMLRequestPrivate : public StsRequestPrivate {

public:
    AssumeRoleWithSAMLRequestPrivate(const StsRequest::Action action,
                                   AssumeRoleWithSAMLRequest * const q);
    AssumeRoleWithSAMLRequestPrivate(const AssumeRoleWithSAMLRequestPrivate &other,
                                   AssumeRoleWithSAMLRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssumeRoleWithSAMLRequest)

};

} // namespace Sts
} // namespace QtAws

#endif
