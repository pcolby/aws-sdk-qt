// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALLFEATURESREQUEST_P_H
#define QTAWS_ENABLEALLFEATURESREQUEST_P_H

#include "organizationsrequest_p.h"
#include "enableallfeaturesrequest.h"

namespace QtAws {
namespace Organizations {

class EnableAllFeaturesRequest;

class EnableAllFeaturesRequestPrivate : public OrganizationsRequestPrivate {

public:
    EnableAllFeaturesRequestPrivate(const OrganizationsRequest::Action action,
                                   EnableAllFeaturesRequest * const q);
    EnableAllFeaturesRequestPrivate(const EnableAllFeaturesRequestPrivate &other,
                                   EnableAllFeaturesRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAllFeaturesRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
