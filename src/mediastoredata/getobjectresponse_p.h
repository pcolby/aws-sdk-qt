// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTRESPONSE_P_H
#define QTAWS_GETOBJECTRESPONSE_P_H

#include "mediastoredataresponse_p.h"

namespace QtAws {
namespace MediaStoreData {

class GetObjectResponse;

class GetObjectResponsePrivate : public MediaStoreDataResponsePrivate {

public:

    explicit GetObjectResponsePrivate(GetObjectResponse * const q);

    void parseGetObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetObjectResponse)
    Q_DISABLE_COPY(GetObjectResponsePrivate)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
