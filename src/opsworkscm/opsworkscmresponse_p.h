// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPSWORKSCMRESPONSE_P_H
#define QTAWS_OPSWORKSCMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace OpsWorksCm {

class OpsWorksCmResponse;

class OpsWorksCmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit OpsWorksCmResponsePrivate(OpsWorksCmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OpsWorksCmResponse)
    Q_DISABLE_COPY(OpsWorksCmResponsePrivate)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
