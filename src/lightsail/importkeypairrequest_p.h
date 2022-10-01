// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTKEYPAIRREQUEST_P_H
#define QTAWS_IMPORTKEYPAIRREQUEST_P_H

#include "lightsailrequest_p.h"
#include "importkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class ImportKeyPairRequest;

class ImportKeyPairRequestPrivate : public LightsailRequestPrivate {

public:
    ImportKeyPairRequestPrivate(const LightsailRequest::Action action,
                                   ImportKeyPairRequest * const q);
    ImportKeyPairRequestPrivate(const ImportKeyPairRequestPrivate &other,
                                   ImportKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
