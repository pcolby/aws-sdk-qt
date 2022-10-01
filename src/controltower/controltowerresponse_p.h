// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONTROLTOWERRESPONSE_P_H
#define QTAWS_CONTROLTOWERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ControlTower {

class ControlTowerResponse;

class ControlTowerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ControlTowerResponsePrivate(ControlTowerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ControlTowerResponse)
    Q_DISABLE_COPY(ControlTowerResponsePrivate)

};

} // namespace ControlTower
} // namespace QtAws

#endif
