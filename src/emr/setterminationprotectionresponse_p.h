// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTERMINATIONPROTECTIONRESPONSE_P_H
#define QTAWS_SETTERMINATIONPROTECTIONRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class SetTerminationProtectionResponse;

class SetTerminationProtectionResponsePrivate : public EmrResponsePrivate {

public:

    explicit SetTerminationProtectionResponsePrivate(SetTerminationProtectionResponse * const q);

    void parseSetTerminationProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetTerminationProtectionResponse)
    Q_DISABLE_COPY(SetTerminationProtectionResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
