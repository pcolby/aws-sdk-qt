// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PERSONALIZEEVENTSRESPONSE_P_H
#define QTAWS_PERSONALIZEEVENTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace PersonalizeEvents {

class PersonalizeEventsResponse;

class PersonalizeEventsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit PersonalizeEventsResponsePrivate(PersonalizeEventsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PersonalizeEventsResponse)
    Q_DISABLE_COPY(PersonalizeEventsResponsePrivate)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
