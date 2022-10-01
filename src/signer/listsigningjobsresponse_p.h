// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGJOBSRESPONSE_P_H
#define QTAWS_LISTSIGNINGJOBSRESPONSE_P_H

#include "signerresponse_p.h"

namespace QtAws {
namespace Signer {

class ListSigningJobsResponse;

class ListSigningJobsResponsePrivate : public SignerResponsePrivate {

public:

    explicit ListSigningJobsResponsePrivate(ListSigningJobsResponse * const q);

    void parseListSigningJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSigningJobsResponse)
    Q_DISABLE_COPY(ListSigningJobsResponsePrivate)

};

} // namespace Signer
} // namespace QtAws

#endif
