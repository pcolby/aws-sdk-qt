// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILINGGROUPREQUEST_H
#define QTAWS_DELETEPROFILINGGROUPREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class DeleteProfilingGroupRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT DeleteProfilingGroupRequest : public CodeGuruProfilerRequest {

public:
    DeleteProfilingGroupRequest(const DeleteProfilingGroupRequest &other);
    DeleteProfilingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteProfilingGroupRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
