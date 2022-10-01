// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOCATIONRESPONSE_P_H
#define QTAWS_LOCATIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Location {

class LocationResponse;

class LocationResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LocationResponsePrivate(LocationResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LocationResponse)
    Q_DISABLE_COPY(LocationResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
