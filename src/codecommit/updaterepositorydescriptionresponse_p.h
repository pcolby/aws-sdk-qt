// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEREPOSITORYDESCRIPTIONRESPONSE_P_H

#include "codecommitresponse_p.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryDescriptionResponse;

class UpdateRepositoryDescriptionResponsePrivate : public CodeCommitResponsePrivate {

public:

    explicit UpdateRepositoryDescriptionResponsePrivate(UpdateRepositoryDescriptionResponse * const q);

    void parseUpdateRepositoryDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryDescriptionResponse)
    Q_DISABLE_COPY(UpdateRepositoryDescriptionResponsePrivate)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
