// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMINCIDENTSRESPONSE_P_H
#define QTAWS_SSMINCIDENTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsResponse;

class SsmIncidentsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsmIncidentsResponsePrivate(SsmIncidentsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsmIncidentsResponse)
    Q_DISABLE_COPY(SsmIncidentsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
