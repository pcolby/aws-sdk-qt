// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTCUSTOMIZATIONRESPONSE_P_H
#define QTAWS_CREATEACCOUNTCUSTOMIZATIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountCustomizationResponse;

class CreateAccountCustomizationResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateAccountCustomizationResponsePrivate(CreateAccountCustomizationResponse * const q);

    void parseCreateAccountCustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAccountCustomizationResponse)
    Q_DISABLE_COPY(CreateAccountCustomizationResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
