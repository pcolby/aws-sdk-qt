// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILINGGROUPSREQUEST_H
#define QTAWS_LISTPROFILINGGROUPSREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class ListProfilingGroupsRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT ListProfilingGroupsRequest : public CodeGuruProfilerRequest {

public:
    ListProfilingGroupsRequest(const ListProfilingGroupsRequest &other);
    ListProfilingGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProfilingGroupsRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
