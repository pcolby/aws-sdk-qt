// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDATARETRIEVALPOLICYRESPONSE_P_H
#define QTAWS_SETDATARETRIEVALPOLICYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class SetDataRetrievalPolicyResponse;

class SetDataRetrievalPolicyResponsePrivate : public GlacierResponsePrivate {

public:

    explicit SetDataRetrievalPolicyResponsePrivate(SetDataRetrievalPolicyResponse * const q);

    void parseSetDataRetrievalPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetDataRetrievalPolicyResponse)
    Q_DISABLE_COPY(SetDataRetrievalPolicyResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
