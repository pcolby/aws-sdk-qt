// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPIPELINEEXECUTIONSRESPONSE_P_H
#define QTAWS_LISTPIPELINEEXECUTIONSRESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class ListPipelineExecutionsResponse;

class ListPipelineExecutionsResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit ListPipelineExecutionsResponsePrivate(ListPipelineExecutionsResponse * const q);

    void parseListPipelineExecutionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPipelineExecutionsResponse)
    Q_DISABLE_COPY(ListPipelineExecutionsResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
