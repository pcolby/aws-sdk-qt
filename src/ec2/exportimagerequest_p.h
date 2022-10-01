// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTIMAGEREQUEST_P_H
#define QTAWS_EXPORTIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "exportimagerequest.h"

namespace QtAws {
namespace Ec2 {

class ExportImageRequest;

class ExportImageRequestPrivate : public Ec2RequestPrivate {

public:
    ExportImageRequestPrivate(const Ec2Request::Action action,
                                   ExportImageRequest * const q);
    ExportImageRequestPrivate(const ExportImageRequestPrivate &other,
                                   ExportImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
