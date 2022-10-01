// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSDATARESPONSE_P_H
#define QTAWS_RDSDATARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace RdsData {

class RdsDataResponse;

class RdsDataResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RdsDataResponsePrivate(RdsDataResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RdsDataResponse)
    Q_DISABLE_COPY(RdsDataResponsePrivate)

};

} // namespace RdsData
} // namespace QtAws

#endif
