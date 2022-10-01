// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTPLAYBACKKEYPAIRREQUEST_P_H
#define QTAWS_IMPORTPLAYBACKKEYPAIRREQUEST_P_H

#include "ivsrequest_p.h"
#include "importplaybackkeypairrequest.h"

namespace QtAws {
namespace Ivs {

class ImportPlaybackKeyPairRequest;

class ImportPlaybackKeyPairRequestPrivate : public IvsRequestPrivate {

public:
    ImportPlaybackKeyPairRequestPrivate(const IvsRequest::Action action,
                                   ImportPlaybackKeyPairRequest * const q);
    ImportPlaybackKeyPairRequestPrivate(const ImportPlaybackKeyPairRequestPrivate &other,
                                   ImportPlaybackKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportPlaybackKeyPairRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
