// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ORGANIZATIONSRESPONSE_P_H
#define QTAWS_ORGANIZATIONSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Organizations {

class OrganizationsResponse;

class OrganizationsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit OrganizationsResponsePrivate(OrganizationsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OrganizationsResponse)
    Q_DISABLE_COPY(OrganizationsResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
