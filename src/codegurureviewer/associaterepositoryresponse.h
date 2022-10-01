// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEREPOSITORYRESPONSE_H
#define QTAWS_ASSOCIATEREPOSITORYRESPONSE_H

#include "codegurureviewerresponse.h"
#include "associaterepositoryrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class AssociateRepositoryResponsePrivate;

class QTAWSCODEGURUREVIEWER_EXPORT AssociateRepositoryResponse : public CodeGuruReviewerResponse {
    Q_OBJECT

public:
    AssociateRepositoryResponse(const AssociateRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRepositoryResponse)
    Q_DISABLE_COPY(AssociateRepositoryResponse)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
