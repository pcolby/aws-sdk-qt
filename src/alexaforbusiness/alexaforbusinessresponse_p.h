// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALEXAFORBUSINESSRESPONSE_P_H
#define QTAWS_ALEXAFORBUSINESSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessResponse;

class AlexaForBusinessResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AlexaForBusinessResponsePrivate(AlexaForBusinessResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AlexaForBusinessResponse)
    Q_DISABLE_COPY(AlexaForBusinessResponsePrivate)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
