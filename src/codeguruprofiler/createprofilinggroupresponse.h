// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILINGGROUPRESPONSE_H
#define QTAWS_CREATEPROFILINGGROUPRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "createprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CreateProfilingGroupResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT CreateProfilingGroupResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    CreateProfilingGroupResponse(const CreateProfilingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProfilingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProfilingGroupResponse)
    Q_DISABLE_COPY(CreateProfilingGroupResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
