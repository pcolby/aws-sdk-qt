// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENODEREQUEST_P_H
#define QTAWS_DESCRIBENODEREQUEST_P_H

#include "panoramarequest_p.h"
#include "describenoderequest.h"

namespace QtAws {
namespace Panorama {

class DescribeNodeRequest;

class DescribeNodeRequestPrivate : public PanoramaRequestPrivate {

public:
    DescribeNodeRequestPrivate(const PanoramaRequest::Action action,
                                   DescribeNodeRequest * const q);
    DescribeNodeRequestPrivate(const DescribeNodeRequestPrivate &other,
                                   DescribeNodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNodeRequest)

};

} // namespace Panorama
} // namespace QtAws

#endif
