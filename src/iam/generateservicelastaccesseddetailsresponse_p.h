// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATESERVICELASTACCESSEDDETAILSRESPONSE_P_H
#define QTAWS_GENERATESERVICELASTACCESSEDDETAILSRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GenerateServiceLastAccessedDetailsResponse;

class GenerateServiceLastAccessedDetailsResponsePrivate : public IamResponsePrivate {

public:

    explicit GenerateServiceLastAccessedDetailsResponsePrivate(GenerateServiceLastAccessedDetailsResponse * const q);

    void parseGenerateServiceLastAccessedDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateServiceLastAccessedDetailsResponse)
    Q_DISABLE_COPY(GenerateServiceLastAccessedDetailsResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
