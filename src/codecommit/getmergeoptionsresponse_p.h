// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMERGEOPTIONSRESPONSE_P_H
#define QTAWS_GETMERGEOPTIONSRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetMergeOptionsResponse;

class GetMergeOptionsResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetMergeOptionsResponsePrivate(GetMergeOptionsResponse * const q);

    void parseGetMergeOptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMergeOptionsResponse)
    Q_DISABLE_COPY(GetMergeOptionsResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
