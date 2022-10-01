// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFILERESPONSE_P_H
#define QTAWS_DELETEFILERESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class DeleteFileResponse;

class DeleteFileResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit DeleteFileResponsePrivate(DeleteFileResponse * const q);

    void parseDeleteFileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFileResponse)
    Q_DISABLE_COPY(DeleteFileResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
