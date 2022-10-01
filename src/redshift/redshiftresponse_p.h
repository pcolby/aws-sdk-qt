// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTRESPONSE_P_H
#define QTAWS_REDSHIFTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Redshift {

class RedshiftResponse;

class RedshiftResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit RedshiftResponsePrivate(RedshiftResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RedshiftResponse)
    Q_DISABLE_COPY(RedshiftResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
