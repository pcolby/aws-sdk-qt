// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESTUDIORESPONSE_P_H
#define QTAWS_UPDATESTUDIORESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class UpdateStudioResponse;

class UpdateStudioResponsePrivate : public EmrResponsePrivate {

public:

    explicit UpdateStudioResponsePrivate(UpdateStudioResponse * const q);

    void parseUpdateStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateStudioResponse)
    Q_DISABLE_COPY(UpdateStudioResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
