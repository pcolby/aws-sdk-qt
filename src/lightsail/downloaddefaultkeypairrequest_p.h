// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDEFAULTKEYPAIRREQUEST_P_H
#define QTAWS_DOWNLOADDEFAULTKEYPAIRREQUEST_P_H

#include "lightsailrequest_p.h"
#include "downloaddefaultkeypairrequest.h"

namespace QtAws {
namespace Lightsail {

class DownloadDefaultKeyPairRequest;

class DownloadDefaultKeyPairRequestPrivate : public LightsailRequestPrivate {

public:
    DownloadDefaultKeyPairRequestPrivate(const LightsailRequest::Action action,
                                   DownloadDefaultKeyPairRequest * const q);
    DownloadDefaultKeyPairRequestPrivate(const DownloadDefaultKeyPairRequestPrivate &other,
                                   DownloadDefaultKeyPairRequest * const q);

private:
    Q_DECLARE_PUBLIC(DownloadDefaultKeyPairRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
