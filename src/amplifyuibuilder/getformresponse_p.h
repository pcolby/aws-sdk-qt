// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFORMRESPONSE_P_H
#define QTAWS_GETFORMRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class GetFormResponse;

class GetFormResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit GetFormResponsePrivate(GetFormResponse * const q);

    void parseGetFormResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFormResponse)
    Q_DISABLE_COPY(GetFormResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
