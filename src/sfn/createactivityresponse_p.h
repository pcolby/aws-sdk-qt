// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACTIVITYRESPONSE_P_H
#define QTAWS_CREATEACTIVITYRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class CreateActivityResponse;

class CreateActivityResponsePrivate : public SfnResponsePrivate {

public:

    explicit CreateActivityResponsePrivate(CreateActivityResponse * const q);

    void parseCreateActivityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateActivityResponse)
    Q_DISABLE_COPY(CreateActivityResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
