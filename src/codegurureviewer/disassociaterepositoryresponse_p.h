// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEREPOSITORYRESPONSE_P_H
#define QTAWS_DISASSOCIATEREPOSITORYRESPONSE_P_H

#include "codegurureviewerresponse_p.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DisassociateRepositoryResponse;

class DisassociateRepositoryResponsePrivate : public CodeGuruReviewerResponsePrivate {

public:

    explicit DisassociateRepositoryResponsePrivate(DisassociateRepositoryResponse * const q);

    void parseDisassociateRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateRepositoryResponse)
    Q_DISABLE_COPY(DisassociateRepositoryResponsePrivate)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
