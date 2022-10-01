// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTRESPONSE_P_H
#define QTAWS_DELETECOMPONENTRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteComponentResponse;

class DeleteComponentResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit DeleteComponentResponsePrivate(DeleteComponentResponse * const q);

    void parseDeleteComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComponentResponse)
    Q_DISABLE_COPY(DeleteComponentResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
