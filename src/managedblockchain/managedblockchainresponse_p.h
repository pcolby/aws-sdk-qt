// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINRESPONSE_P_H
#define QTAWS_MANAGEDBLOCKCHAINRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainResponse;

class ManagedBlockchainResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ManagedBlockchainResponsePrivate(ManagedBlockchainResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ManagedBlockchainResponse)
    Q_DISABLE_COPY(ManagedBlockchainResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
