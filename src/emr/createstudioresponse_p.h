// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTUDIORESPONSE_P_H
#define QTAWS_CREATESTUDIORESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class CreateStudioResponse;

class CreateStudioResponsePrivate : public EmrResponsePrivate {

public:

    explicit CreateStudioResponsePrivate(CreateStudioResponse * const q);

    void parseCreateStudioResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStudioResponse)
    Q_DISABLE_COPY(CreateStudioResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
