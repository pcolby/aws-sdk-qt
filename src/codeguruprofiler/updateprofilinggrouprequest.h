// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROFILINGGROUPREQUEST_H
#define QTAWS_UPDATEPROFILINGGROUPREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class UpdateProfilingGroupRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT UpdateProfilingGroupRequest : public CodeGuruProfilerRequest {

public:
    UpdateProfilingGroupRequest(const UpdateProfilingGroupRequest &other);
    UpdateProfilingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
