// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERRESPONSE_P_H
#define QTAWS_TRANSFERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Transfer {

class TransferResponse;

class TransferResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit TransferResponsePrivate(TransferResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TransferResponse)
    Q_DISABLE_COPY(TransferResponsePrivate)

};

} // namespace Transfer
} // namespace QtAws

#endif
