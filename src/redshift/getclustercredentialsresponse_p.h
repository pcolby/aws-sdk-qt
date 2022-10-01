// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSRESPONSE_P_H
#define QTAWS_GETCLUSTERCREDENTIALSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsResponse;

class GetClusterCredentialsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit GetClusterCredentialsResponsePrivate(GetClusterCredentialsResponse * const q);

    void parseGetClusterCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClusterCredentialsResponse)
    Q_DISABLE_COPY(GetClusterCredentialsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
