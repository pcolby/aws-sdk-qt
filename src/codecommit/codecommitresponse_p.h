// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODECOMMITRESPONSE_P_H
#define QTAWS_CODECOMMITRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class CodeCommitResponse;

class CodeCommitResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CodeCommitResponsePrivate(CodeCommitResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CodeCommitResponse)
    Q_DISABLE_COPY(CodeCommitResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
