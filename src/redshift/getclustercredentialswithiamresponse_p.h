// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCLUSTERCREDENTIALSWITHIAMRESPONSE_P_H
#define QTAWS_GETCLUSTERCREDENTIALSWITHIAMRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class GetClusterCredentialsWithIAMResponse;

class GetClusterCredentialsWithIAMResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit GetClusterCredentialsWithIAMResponsePrivate(GetClusterCredentialsWithIAMResponse * const q);

    void parseGetClusterCredentialsWithIAMResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetClusterCredentialsWithIAMResponse)
    Q_DISABLE_COPY(GetClusterCredentialsWithIAMResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
