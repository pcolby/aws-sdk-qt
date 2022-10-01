// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSIGNINGJOBRESPONSE_P_H
#define QTAWS_STARTSIGNINGJOBRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class StartSigningJobResponse;

class StartSigningJobResponsePrivate : public SignerResponsePrivate {

public:

    explicit StartSigningJobResponsePrivate(StartSigningJobResponse * const q);

    void parseStartSigningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartSigningJobResponse)
    Q_DISABLE_COPY(StartSigningJobResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
