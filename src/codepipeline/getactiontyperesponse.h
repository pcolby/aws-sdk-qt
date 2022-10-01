// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACTIONTYPERESPONSE_H
#define QTAWS_GETACTIONTYPERESPONSE_H

#include "codepipelineresponse.h"
#include "getactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class GetActionTypeResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT GetActionTypeResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    GetActionTypeResponse(const GetActionTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetActionTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetActionTypeResponse)
    Q_DISABLE_COPY(GetActionTypeResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
