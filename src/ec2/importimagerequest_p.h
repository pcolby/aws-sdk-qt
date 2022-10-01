// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTIMAGEREQUEST_P_H
#define QTAWS_IMPORTIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "importimagerequest.h"

namespace QtAws {
namespace Ec2 {

class ImportImageRequest;

class ImportImageRequestPrivate : public Ec2RequestPrivate {

public:
    ImportImageRequestPrivate(const Ec2Request::Action action,
                                   ImportImageRequest * const q);
    ImportImageRequestPrivate(const ImportImageRequestPrivate &other,
                                   ImportImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
