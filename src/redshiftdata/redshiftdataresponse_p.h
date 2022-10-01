// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATARESPONSE_P_H
#define QTAWS_REDSHIFTDATARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace RedshiftData {

class RedshiftDataResponse;

class RedshiftDataResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RedshiftDataResponsePrivate(RedshiftDataResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RedshiftDataResponse)
    Q_DISABLE_COPY(RedshiftDataResponsePrivate)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
