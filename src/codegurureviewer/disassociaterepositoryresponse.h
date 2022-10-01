// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEREPOSITORYRESPONSE_H
#define QTAWS_DISASSOCIATEREPOSITORYRESPONSE_H

#include "codegurureviewerresponse.h"
#include "disassociaterepositoryrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DisassociateRepositoryResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT DisassociateRepositoryResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    DisassociateRepositoryResponse(const DisassociateRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateRepositoryResponse)
    Q_DISABLE_COPY(DisassociateRepositoryResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
