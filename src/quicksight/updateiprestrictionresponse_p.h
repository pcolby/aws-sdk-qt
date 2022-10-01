// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIPRESTRICTIONRESPONSE_P_H
#define QTAWS_UPDATEIPRESTRICTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateIpRestrictionResponse;

class UpdateIpRestrictionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateIpRestrictionResponsePrivate(UpdateIpRestrictionResponse * const q);

    void parseUpdateIpRestrictionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIpRestrictionResponse)
    Q_DISABLE_COPY(UpdateIpRestrictionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
