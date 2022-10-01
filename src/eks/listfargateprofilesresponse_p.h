// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFARGATEPROFILESRESPONSE_P_H
#define QTAWS_LISTFARGATEPROFILESRESPONSE_P_H

#include "eksresponse_p.h"

namespace QtAws {
namespace Eks {

class ListFargateProfilesResponse;

class ListFargateProfilesResponsePrivate : public EksResponsePrivate {

public:

    explicit ListFargateProfilesResponsePrivate(ListFargateProfilesResponse * const q);

    void parseListFargateProfilesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFargateProfilesResponse)
    Q_DISABLE_COPY(ListFargateProfilesResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
