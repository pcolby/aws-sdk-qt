// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPOSITORYRESPONSE_P_H
#define QTAWS_CREATEREPOSITORYRESPONSE_P_H

#include "ecrpublicresponse_p.h"

namespace QtAws {
namespace EcrPublic {

class CreateRepositoryResponse;

class CreateRepositoryResponsePrivate : public EcrPublicResponsePrivate {

public:

    explicit CreateRepositoryResponsePrivate(CreateRepositoryResponse * const q);

    void parseCreateRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRepositoryResponse)
    Q_DISABLE_COPY(CreateRepositoryResponsePrivate)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
