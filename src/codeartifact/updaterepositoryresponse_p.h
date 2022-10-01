// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPOSITORYRESPONSE_P_H
#define QTAWS_UPDATEREPOSITORYRESPONSE_P_H

#include "codeartifactresponse_p.h"

namespace QtAws {
namespace CodeArtifact {

class UpdateRepositoryResponse;

class UpdateRepositoryResponsePrivate : public CodeArtifactResponsePrivate {

public:

    explicit UpdateRepositoryResponsePrivate(UpdateRepositoryResponse * const q);

    void parseUpdateRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRepositoryResponse)
    Q_DISABLE_COPY(UpdateRepositoryResponsePrivate)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
