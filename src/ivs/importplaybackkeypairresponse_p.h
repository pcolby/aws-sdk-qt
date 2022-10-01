// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTPLAYBACKKEYPAIRRESPONSE_P_H
#define QTAWS_IMPORTPLAYBACKKEYPAIRRESPONSE_P_H

#include "ivsresponse_p.h"

namespace QtAws {
namespace Ivs {

class ImportPlaybackKeyPairResponse;

class ImportPlaybackKeyPairResponsePrivate : public IvsResponsePrivate {

public:

    explicit ImportPlaybackKeyPairResponsePrivate(ImportPlaybackKeyPairResponse * const q);

    void parseImportPlaybackKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportPlaybackKeyPairResponse)
    Q_DISABLE_COPY(ImportPlaybackKeyPairResponsePrivate)

};

} // namespace Ivs
} // namespace QtAws

#endif
