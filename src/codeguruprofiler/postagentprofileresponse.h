// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTAGENTPROFILERESPONSE_H
#define QTAWS_POSTAGENTPROFILERESPONSE_H

#include "codeguruprofilerresponse.h"
#include "postagentprofilerequest.h"

namespace QtAws {
namespace CodeGuruProfiler {

class PostAgentProfileResponsePrivate;

class QTAWSCODEGURUPROFILER_EXPORT PostAgentProfileResponse : public CodeGuruProfilerResponse {
    Q_OBJECT

public:
    PostAgentProfileResponse(const PostAgentProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostAgentProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostAgentProfileResponse)
    Q_DISABLE_COPY(PostAgentProfileResponse)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
