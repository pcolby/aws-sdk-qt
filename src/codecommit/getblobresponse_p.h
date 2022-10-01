// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBLOBRESPONSE_P_H
#define QTAWS_GETBLOBRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetBlobResponse;

class GetBlobResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetBlobResponsePrivate(GetBlobResponse * const q);

    void parseGetBlobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBlobResponse)
    Q_DISABLE_COPY(GetBlobResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
