// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROTONRESPONSE_P_H
#define QTAWS_PROTONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Proton {

class ProtonResponse;

class ProtonResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ProtonResponsePrivate(ProtonResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ProtonResponse)
    Q_DISABLE_COPY(ProtonResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
