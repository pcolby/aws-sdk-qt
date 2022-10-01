// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECUSTOMACTIONTYPERESPONSE_H
#define QTAWS_DELETECUSTOMACTIONTYPERESPONSE_H

#include "codepipelineresponse.h"
#include "deletecustomactiontyperequest.h"

namespace QtAws {
namespace CodePipeline {

class DeleteCustomActionTypeResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT DeleteCustomActionTypeResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    DeleteCustomActionTypeResponse(const DeleteCustomActionTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCustomActionTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCustomActionTypeResponse)
    Q_DISABLE_COPY(DeleteCustomActionTypeResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
