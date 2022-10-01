// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBRUNRESPONSE_P_H
#define QTAWS_GETJOBRUNRESPONSE_P_H

#include "emrserverlessresponse_p.h"

namespace QtAws {
namespace EmrServerless {

class GetJobRunResponse;

class GetJobRunResponsePrivate : public EmrServerlessResponsePrivate {

public:

    explicit GetJobRunResponsePrivate(GetJobRunResponse * const q);

    void parseGetJobRunResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobRunResponse)
    Q_DISABLE_COPY(GetJobRunResponsePrivate)

};

} // namespace EmrServerless
} // namespace QtAws

#endif
