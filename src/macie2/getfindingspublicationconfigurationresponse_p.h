// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetFindingsPublicationConfigurationResponse;

class GetFindingsPublicationConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetFindingsPublicationConfigurationResponsePrivate(GetFindingsPublicationConfigurationResponse * const q);

    void parseGetFindingsPublicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFindingsPublicationConfigurationResponse)
    Q_DISABLE_COPY(GetFindingsPublicationConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
