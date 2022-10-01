// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACTIONEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTACTIONEXECUTIONSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class ListActionExecutionsResponse;

class ListActionExecutionsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit ListActionExecutionsResponsePrivate(ListActionExecutionsResponse * const q);

    void parseListActionExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListActionExecutionsResponse)
    Q_DISABLE_COPY(ListActionExecutionsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
