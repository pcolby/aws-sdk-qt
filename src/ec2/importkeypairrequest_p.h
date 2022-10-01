// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYPAIRREQUEST_P_H
#define QTAWS_IMPORTKEYPAIRREQUEST_P_H

#include "ec2request_p.h"
#include "importkeypairrequest.h"

namespace QtAws {
namespace Ec2 {

class ImportKeyPairRequest;

class ImportKeyPairRequestPrivate : public Ec2RequestPrivate {

public:
    ImportKeyPairRequestPrivate(const Ec2Request::Action action,
                                   ImportKeyPairRequest * const q);
    ImportKeyPairRequestPrivate(const ImportKeyPairRequestPrivate &other,
                                   ImportKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportKeyPairRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
