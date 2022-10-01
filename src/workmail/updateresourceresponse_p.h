// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCERESPONSE_P_H
#define QTAWS_UPDATERESOURCERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdateResourceResponse;

class UpdateResourceResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdateResourceResponsePrivate(UpdateResourceResponse * const q);

    void parseUpdateResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceResponse)
    Q_DISABLE_COPY(UpdateResourceResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
