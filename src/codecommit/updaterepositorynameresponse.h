// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYNAMERESPONSE_H
#define QTAWS_UPDATEREPOSITORYNAMERESPONSE_H

#include "codecommitresponse.h"
#include "updaterepositorynamerequest.h"

namespace QtAws {
namespace CodeCommit {

class UpdateRepositoryNameResponsePrivate;

class QTAWSCODECOMMIT_EXPORT UpdateRepositoryNameResponse : public CodeCommitResponse {
    Q_OBJECT

public:
    UpdateRepositoryNameResponse(const UpdateRepositoryNameRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRepositoryNameRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRepositoryNameResponse)
    Q_DISABLE_COPY(UpdateRepositoryNameResponse)

};

} // namespace CodeCommit
} // namespace QtAws

#endif
