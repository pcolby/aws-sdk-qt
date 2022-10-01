// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESHARINGWITHAWSORGANIZATIONRESPONSE_P_H
#define QTAWS_ENABLESHARINGWITHAWSORGANIZATIONRESPONSE_P_H

#include "ramresponse_p.h"

namespace QtAws {
namespace Ram {

class EnableSharingWithAwsOrganizationResponse;

class EnableSharingWithAwsOrganizationResponsePrivate : public RamResponsePrivate {

public:

    explicit EnableSharingWithAwsOrganizationResponsePrivate(EnableSharingWithAwsOrganizationResponse * const q);

    void parseEnableSharingWithAwsOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSharingWithAwsOrganizationResponse)
    Q_DISABLE_COPY(EnableSharingWithAwsOrganizationResponsePrivate)

};

} // namespace Ram
} // namespace QtAws

#endif
