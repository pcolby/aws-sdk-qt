// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LEXMODELBUILDINGRESPONSE_P_H
#define QTAWS_LEXMODELBUILDINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class LexModelBuildingResponse;

class LexModelBuildingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LexModelBuildingResponsePrivate(LexModelBuildingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LexModelBuildingResponse)
    Q_DISABLE_COPY(LexModelBuildingResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
