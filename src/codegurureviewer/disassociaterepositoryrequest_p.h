// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEREPOSITORYREQUEST_P_H
#define QTAWS_DISASSOCIATEREPOSITORYREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "disassociaterepositoryrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DisassociateRepositoryRequest;

class DisassociateRepositoryRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    DisassociateRepositoryRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   DisassociateRepositoryRequest * const q);
    DisassociateRepositoryRequestPrivate(const DisassociateRepositoryRequestPrivate &other,
                                   DisassociateRepositoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateRepositoryRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
