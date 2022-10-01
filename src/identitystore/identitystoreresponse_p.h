// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTORERESPONSE_P_H
#define QTAWS_IDENTITYSTORERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class IdentityStoreResponse;

class IdentityStoreResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IdentityStoreResponsePrivate(IdentityStoreResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IdentityStoreResponse)
    Q_DISABLE_COPY(IdentityStoreResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
