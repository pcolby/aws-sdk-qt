// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTAGENTPROFILEREQUEST_H
#define QTAWS_POSTAGENTPROFILEREQUEST_H

#include "codeguruprofilerrequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PostAgentProfileRequestPrivate;

class QTAWSCODEGURUPROFILER_EXPORT PostAgentProfileRequest : public CodeGuruProfilerRequest {

public:
    PostAgentProfileRequest(const PostAgentProfileRequest &other);
    PostAgentProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostAgentProfileRequest)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
