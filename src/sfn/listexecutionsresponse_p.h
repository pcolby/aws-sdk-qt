// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTEXECUTIONSRESPONSE_P_H

#include "sfnresponse_p.h"

namespace QtAws {
namespace Sfn {

class ListExecutionsResponse;

class ListExecutionsResponsePrivate : public SfnResponsePrivate {

public:

    explicit ListExecutionsResponsePrivate(ListExecutionsResponse * const q);

    void parseListExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListExecutionsResponse)
    Q_DISABLE_COPY(ListExecutionsResponsePrivate)

};

} // namespace Sfn
} // namespace QtAws

#endif
