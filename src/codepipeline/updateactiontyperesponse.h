// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACTIONTYPERESPONSE_H
#define QTAWS_UPDATEACTIONTYPERESPONSE_H

#include "codepipelineresponse.h"
#include "updateactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class UpdateActionTypeResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT UpdateActionTypeResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    UpdateActionTypeResponse(const UpdateActionTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateActionTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateActionTypeResponse)
    Q_DISABLE_COPY(UpdateActionTypeResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
