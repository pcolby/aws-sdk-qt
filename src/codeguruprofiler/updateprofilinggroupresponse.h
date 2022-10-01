// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILINGGROUPRESPONSE_H
#define QTAWS_UPDATEPROFILINGGROUPRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "updateprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class UpdateProfilingGroupResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT UpdateProfilingGroupResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    UpdateProfilingGroupResponse(const UpdateProfilingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProfilingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfilingGroupResponse)
    Q_DISABLE_COPY(UpdateProfilingGroupResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
