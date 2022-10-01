// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTRESPONSE_P_H
#define QTAWS_UPDATEPROJECTRESPONSE_P_H

#include "mobileresponse_p.h"

namespace QtAws {
namespace Mobile {

class UpdateProjectResponse;

class UpdateProjectResponsePrivate : public MobileResponsePrivate {

public:

    explicit UpdateProjectResponsePrivate(UpdateProjectResponse * const q);

    void parseUpdateProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProjectResponse)
    Q_DISABLE_COPY(UpdateProjectResponsePrivate)

};

} // namespace Mobile
} // namespace QtAws

#endif
