// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZESNAPSHOTACCESSRESPONSE_P_H
#define QTAWS_AUTHORIZESNAPSHOTACCESSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AuthorizeSnapshotAccessResponse;

class AuthorizeSnapshotAccessResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AuthorizeSnapshotAccessResponsePrivate(AuthorizeSnapshotAccessResponse * const q);

    void parseAuthorizeSnapshotAccessResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AuthorizeSnapshotAccessResponse)
    Q_DISABLE_COPY(AuthorizeSnapshotAccessResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
