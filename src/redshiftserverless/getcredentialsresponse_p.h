// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCREDENTIALSRESPONSE_P_H
#define QTAWS_GETCREDENTIALSRESPONSE_P_H

#include "redshiftserverlessresponse_p.h"

namespace QtAws {
namespace RedshiftServerless {

class GetCredentialsResponse;

class GetCredentialsResponsePrivate : public RedshiftServerlessResponsePrivate {

public:

    explicit GetCredentialsResponsePrivate(GetCredentialsResponse * const q);

    void parseGetCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCredentialsResponse)
    Q_DISABLE_COPY(GetCredentialsResponsePrivate)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
