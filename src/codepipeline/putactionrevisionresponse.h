// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACTIONREVISIONRESPONSE_H
#define QTAWS_PUTACTIONREVISIONRESPONSE_H

#include "codepipelineresponse.h"
#include "putactionrevisionrequest.h"

namespace QtAws {
namespace CodePipeline {

class PutActionRevisionResponsePrivate;

class QTAWSCODEPIPELINE_EXPORT PutActionRevisionResponse : public CodePipelineResponse {
    Q_OBJECT

public:
    PutActionRevisionResponse(const PutActionRevisionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutActionRevisionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutActionRevisionResponse)
    Q_DISABLE_COPY(PutActionRevisionResponse)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
