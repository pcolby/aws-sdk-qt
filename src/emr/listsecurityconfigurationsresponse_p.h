// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYCONFIGURATIONSRESPONSE_P_H
#define QTAWS_LISTSECURITYCONFIGURATIONSRESPONSE_P_H

#include "emrresponse_p.h"

namespace QtAws {
namespace Emr {

class ListSecurityConfigurationsResponse;

class ListSecurityConfigurationsResponsePrivate : public EmrResponsePrivate {

public:

    explicit ListSecurityConfigurationsResponsePrivate(ListSecurityConfigurationsResponse * const q);

    void parseListSecurityConfigurationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSecurityConfigurationsResponse)
    Q_DISABLE_COPY(ListSecurityConfigurationsResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
