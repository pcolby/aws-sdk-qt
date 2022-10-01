// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOWNLOADDEFAULTKEYPAIRRESPONSE_P_H
#define QTAWS_DOWNLOADDEFAULTKEYPAIRRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DownloadDefaultKeyPairResponse;

class DownloadDefaultKeyPairResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DownloadDefaultKeyPairResponsePrivate(DownloadDefaultKeyPairResponse * const q);

    void parseDownloadDefaultKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DownloadDefaultKeyPairResponse)
    Q_DISABLE_COPY(DownloadDefaultKeyPairResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
