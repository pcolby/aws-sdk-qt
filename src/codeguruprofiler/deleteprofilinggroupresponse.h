// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILINGGROUPRESPONSE_H
#define QTAWS_DELETEPROFILINGGROUPRESPONSE_H

#include "codeguruprofilerresponse.h"
#include "deleteprofilinggrouprequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DeleteProfilingGroupResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT DeleteProfilingGroupResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    DeleteProfilingGroupResponse(const DeleteProfilingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteProfilingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfilingGroupResponse)
    Q_DISABLE_COPY(DeleteProfilingGroupResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
