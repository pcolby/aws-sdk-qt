// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVITYRESPONSE_P_H
#define QTAWS_DELETEACTIVITYRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class DeleteActivityResponse;

class DeleteActivityResponsePrivate : public SfnResponsePrivate {

public:

    explicit DeleteActivityResponsePrivate(DeleteActivityResponse * const q);

    void parseDeleteActivityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteActivityResponse)
    Q_DISABLE_COPY(DeleteActivityResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
