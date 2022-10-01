// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTFINDINGSPUBLICATIONCONFIGURATIONRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class PutFindingsPublicationConfigurationResponse;

class PutFindingsPublicationConfigurationResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit PutFindingsPublicationConfigurationResponsePrivate(PutFindingsPublicationConfigurationResponse * const q);

    void parsePutFindingsPublicationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFindingsPublicationConfigurationResponse)
    Q_DISABLE_COPY(PutFindingsPublicationConfigurationResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
