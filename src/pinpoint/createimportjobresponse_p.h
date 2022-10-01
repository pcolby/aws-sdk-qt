// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMPORTJOBRESPONSE_P_H
#define QTAWS_CREATEIMPORTJOBRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateImportJobResponse;

class CreateImportJobResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateImportJobResponsePrivate(CreateImportJobResponse * const q);

    void parseCreateImportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateImportJobResponse)
    Q_DISABLE_COPY(CreateImportJobResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
