// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CUSTOMERPROFILESRESPONSE_P_H
#define QTAWS_CUSTOMERPROFILESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CustomerProfiles {

class CustomerProfilesResponse;

class CustomerProfilesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CustomerProfilesResponsePrivate(CustomerProfilesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CustomerProfilesResponse)
    Q_DISABLE_COPY(CustomerProfilesResponsePrivate)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
