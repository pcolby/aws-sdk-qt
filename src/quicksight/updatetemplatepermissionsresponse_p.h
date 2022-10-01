// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATEPERMISSIONSRESPONSE_P_H
#define QTAWS_UPDATETEMPLATEPERMISSIONSRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class UpdateTemplatePermissionsResponse;

class UpdateTemplatePermissionsResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit UpdateTemplatePermissionsResponsePrivate(UpdateTemplatePermissionsResponse * const q);

    void parseUpdateTemplatePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTemplatePermissionsResponse)
    Q_DISABLE_COPY(UpdateTemplatePermissionsResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
