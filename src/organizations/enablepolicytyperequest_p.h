// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEPOLICYTYPEREQUEST_P_H
#define QTAWS_ENABLEPOLICYTYPEREQUEST_P_H

#include "organizationsrequest_p.h"
#include "enablepolicytyperequest.h"

namespace QtAws {
namespace Organizations {

class EnablePolicyTypeRequest;

class EnablePolicyTypeRequestPrivate : public OrganizationsRequestPrivate {

public:
    EnablePolicyTypeRequestPrivate(const OrganizationsRequest::Action action,
                                   EnablePolicyTypeRequest * const q);
    EnablePolicyTypeRequestPrivate(const EnablePolicyTypeRequestPrivate &other,
                                   EnablePolicyTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnablePolicyTypeRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
