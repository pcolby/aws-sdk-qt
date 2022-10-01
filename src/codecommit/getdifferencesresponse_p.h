// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIFFERENCESRESPONSE_P_H
#define QTAWS_GETDIFFERENCESRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class GetDifferencesResponse;

class GetDifferencesResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit GetDifferencesResponsePrivate(GetDifferencesResponse * const q);

    void parseGetDifferencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDifferencesResponse)
    Q_DISABLE_COPY(GetDifferencesResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
