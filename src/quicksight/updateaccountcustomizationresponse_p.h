// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTCUSTOMIZATIONRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTCUSTOMIZATIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateAccountCustomizationResponse;

class UpdateAccountCustomizationResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateAccountCustomizationResponsePrivate(UpdateAccountCustomizationResponse * const q);

    void parseUpdateAccountCustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountCustomizationResponse)
    Q_DISABLE_COPY(UpdateAccountCustomizationResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
