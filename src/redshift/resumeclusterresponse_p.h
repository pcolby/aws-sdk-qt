// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMECLUSTERRESPONSE_P_H
#define QTAWS_RESUMECLUSTERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ResumeClusterResponse;

class ResumeClusterResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ResumeClusterResponsePrivate(ResumeClusterResponse * const q);

    void parseResumeClusterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeClusterResponse)
    Q_DISABLE_COPY(ResumeClusterResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
