// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFORMRESPONSE_P_H
#define QTAWS_CREATEFORMRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class CreateFormResponse;

class CreateFormResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit CreateFormResponsePrivate(CreateFormResponse * const q);

    void parseCreateFormResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFormResponse)
    Q_DISABLE_COPY(CreateFormResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
