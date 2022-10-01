// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTCUSTOMIZATIONRESPONSE_P_H
#define QTAWS_DELETEACCOUNTCUSTOMIZATIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DeleteAccountCustomizationResponse;

class DeleteAccountCustomizationResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DeleteAccountCustomizationResponsePrivate(DeleteAccountCustomizationResponse * const q);

    void parseDeleteAccountCustomizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountCustomizationResponse)
    Q_DISABLE_COPY(DeleteAccountCustomizationResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
