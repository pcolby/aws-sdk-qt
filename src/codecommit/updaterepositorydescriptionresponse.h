// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYDESCRIPTIONRESPONSE_H
#define QTAWS_UPDATEREPOSITORYDESCRIPTIONRESPONSE_H

#include "codecommitresponse.h"
#include "updaterepositorydescriptionrequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryDescriptionResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateRepositoryDescriptionResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateRepositoryDescriptionResponse(const UpdateRepositoryDescriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRepositoryDescriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRepositoryDescriptionResponse)
    Q_DISABLE_COPY(UpdateRepositoryDescriptionResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
