// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFILERESPONSE_P_H
#define QTAWS_GETFILERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetFileResponse;

class GetFileResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetFileResponsePrivate(GetFileResponse * const q);

    void parseGetFileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFileResponse)
    Q_DISABLE_COPY(GetFileResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
