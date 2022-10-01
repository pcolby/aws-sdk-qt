// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFORMRESPONSE_P_H
#define QTAWS_UPDATEFORMRESPONSE_P_H

#include "amplifyuibuilderresponse_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

class UpdateFormResponse;

class UpdateFormResponsePrivate : public AmplifyUIBuilderResponsePrivate {

public:

    explicit UpdateFormResponsePrivate(UpdateFormResponse * const q);

    void parseUpdateFormResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFormResponse)
    Q_DISABLE_COPY(UpdateFormResponsePrivate)

};

} // namespace AmplifyUIBuilder
} // namespace QtAws

#endif
