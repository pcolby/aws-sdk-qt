// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFORMSRESPONSE_P_H
#define QTAWS_LISTFORMSRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class ListFormsResponse;

class ListFormsResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit ListFormsResponsePrivate(ListFormsResponse * const q);

    void parseListFormsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFormsResponse)
    Q_DISABLE_COPY(ListFormsResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
