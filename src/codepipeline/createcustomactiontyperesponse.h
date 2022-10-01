// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMACTIONTYPERESPONSE_H
#define QTAWS_CREATECUSTOMACTIONTYPERESPONSE_H

#include "codepipelineresponse.h"
#include "createcustomactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class CreateCustomActionTypeResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT CreateCustomActionTypeResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    CreateCustomActionTypeResponse(const CreateCustomActionTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCustomActionTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomActionTypeResponse)
    Q_DISABLE_COPY(CreateCustomActionTypeResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
