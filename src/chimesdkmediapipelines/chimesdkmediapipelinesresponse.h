// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESRESPONSE_H
#define QTAWS_CHIMESDKMEDIAPIPELINESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawschimesdkmediapipelinesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesResponsePrivate;

class QTAWSCHIMESDKMEDIAPIPELINES_EXPORT ChimeSdkMediaPipelinesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ChimeSdkMediaPipelinesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ChimeSdkMediaPipelinesResponse(ChimeSdkMediaPipelinesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeSdkMediaPipelinesResponse)
    Q_DISABLE_COPY(ChimeSdkMediaPipelinesResponse)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
