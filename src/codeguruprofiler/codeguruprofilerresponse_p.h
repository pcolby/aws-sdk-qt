// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEGURUPROFILERRESPONSE_P_H
#define QTAWS_CODEGURUPROFILERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class CodeGuruProfilerResponse;

class CodeGuruProfilerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeGuruProfilerResponsePrivate(CodeGuruProfilerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeGuruProfilerResponse)
    Q_DISABLE_COPY(CodeGuruProfilerResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
