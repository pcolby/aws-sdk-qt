// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAKEFORMATIONRESPONSE_P_H
#define QTAWS_LAKEFORMATIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LakeFormation {

class LakeFormationResponse;

class LakeFormationResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LakeFormationResponsePrivate(LakeFormationResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LakeFormationResponse)
    Q_DISABLE_COPY(LakeFormationResponsePrivate)

};

} // namespace LakeFormation
} // namespace QtAws

#endif
