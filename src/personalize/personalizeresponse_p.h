// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZERESPONSE_P_H
#define QTAWS_PERSONALIZERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Personalize {

class PersonalizeResponse;

class PersonalizeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PersonalizeResponsePrivate(PersonalizeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PersonalizeResponse)
    Q_DISABLE_COPY(PersonalizeResponsePrivate)

};

} // namespace Personalize
} // namespace QtAws

#endif
