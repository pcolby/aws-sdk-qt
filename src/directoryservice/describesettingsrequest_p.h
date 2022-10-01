// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESETTINGSREQUEST_P_H
#define QTAWS_DESCRIBESETTINGSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "describesettingsrequest.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSettingsRequest;

class DescribeSettingsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    DescribeSettingsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   DescribeSettingsRequest * const q);
    DescribeSettingsRequestPrivate(const DescribeSettingsRequestPrivate &other,
                                   DescribeSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSettingsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
