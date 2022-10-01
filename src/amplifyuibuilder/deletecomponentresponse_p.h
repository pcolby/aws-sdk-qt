// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOMPONENTRESPONSE_P_H
#define QTAWS_DELETECOMPONENTRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class DeleteComponentResponse;

class DeleteComponentResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit DeleteComponentResponsePrivate(DeleteComponentResponse * const q);

    void parseDeleteComponentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteComponentResponse)
    Q_DISABLE_COPY(DeleteComponentResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
