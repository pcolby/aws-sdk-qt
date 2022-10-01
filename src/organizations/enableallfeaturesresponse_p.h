// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALLFEATURESRESPONSE_P_H
#define QTAWS_ENABLEALLFEATURESRESPONSE_P_H

#include "organizationsresponse_p.h"

namespace QtAws {
namespace Organizations {

class EnableAllFeaturesResponse;

class EnableAllFeaturesResponsePrivate : public OrganizationsResponsePrivate {

public:

    explicit EnableAllFeaturesResponsePrivate(EnableAllFeaturesResponse * const q);

    void parseEnableAllFeaturesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAllFeaturesResponse)
    Q_DISABLE_COPY(EnableAllFeaturesResponsePrivate)

};

} // namespace Organizations
} // namespace QtAws

#endif
