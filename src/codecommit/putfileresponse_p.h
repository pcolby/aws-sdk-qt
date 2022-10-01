// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILERESPONSE_P_H
#define QTAWS_PUTFILERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class PutFileResponse;

class PutFileResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit PutFileResponsePrivate(PutFileResponse * const q);

    void parsePutFileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutFileResponse)
    Q_DISABLE_COPY(PutFileResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
