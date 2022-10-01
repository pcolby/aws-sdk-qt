// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTVOLUMEREQUEST_P_H
#define QTAWS_IMPORTVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "importvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class ImportVolumeRequest;

class ImportVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    ImportVolumeRequestPrivate(const Ec2Request::Action action,
                                   ImportVolumeRequest * const q);
    ImportVolumeRequestPrivate(const ImportVolumeRequestPrivate &other,
                                   ImportVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
