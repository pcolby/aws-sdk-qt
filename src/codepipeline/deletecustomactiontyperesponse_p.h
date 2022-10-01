// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMACTIONTYPERESPONSE_P_H
#define QTAWS_DELETECUSTOMACTIONTYPERESPONSE_P_H

#include "codepipelineresponse_p.h"

namespace QtAws {
namespace CodePipeline {

class DeleteCustomActionTypeResponse;

class DeleteCustomActionTypeResponsePrivate : public CodePipelineResponsePrivate {

public:

    explicit DeleteCustomActionTypeResponsePrivate(DeleteCustomActionTypeResponse * const q);

    void parseDeleteCustomActionTypeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCustomActionTypeResponse)
    Q_DISABLE_COPY(DeleteCustomActionTypeResponsePrivate)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
