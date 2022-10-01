// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEJOBRESPONSE_P_H
#define QTAWS_INITIATEJOBRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class InitiateJobResponse;

class InitiateJobResponsePrivate : public GlacierResponsePrivate {

public:

    explicit InitiateJobResponsePrivate(InitiateJobResponse * const q);

    void parseInitiateJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InitiateJobResponse)
    Q_DISABLE_COPY(InitiateJobResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
