// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYRESPONSE_H
#define QTAWS_UPDATEREPOSITORYRESPONSE_H

#include "codeartifactresponse.h"
#include "updaterepositoryrequest.h"

namespace QtAws {
namespace CodeArtifact {

class UpdateRepositoryResponsePrivate;

class QTAWSCODEARTIFACT_EXPORT UpdateRepositoryResponse : public CodeArtifactResponse {
    Q_OBJECT

public:
    UpdateRepositoryResponse(const UpdateRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRepositoryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRepositoryResponse)
    Q_DISABLE_COPY(UpdateRepositoryResponse)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
