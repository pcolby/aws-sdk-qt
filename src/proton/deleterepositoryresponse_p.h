// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPOSITORYRESPONSE_P_H
#define QTAWS_DELETEREPOSITORYRESPONSE_P_H

#include "protonresponse_p.h"

namespace QtAws {
namespace Proton {

class DeleteRepositoryResponse;

class DeleteRepositoryResponsePrivate : public ProtonResponsePrivate {

public:

    explicit DeleteRepositoryResponsePrivate(DeleteRepositoryResponse * const q);

    void parseDeleteRepositoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRepositoryResponse)
    Q_DISABLE_COPY(DeleteRepositoryResponsePrivate)

};

} // namespace Proton
} // namespace QtAws

#endif
