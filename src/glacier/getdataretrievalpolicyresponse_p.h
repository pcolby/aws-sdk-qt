// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATARETRIEVALPOLICYRESPONSE_P_H
#define QTAWS_GETDATARETRIEVALPOLICYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class GetDataRetrievalPolicyResponse;

class GetDataRetrievalPolicyResponsePrivate : public GlacierResponsePrivate {

public:

    explicit GetDataRetrievalPolicyResponsePrivate(GetDataRetrievalPolicyResponse * const q);

    void parseGetDataRetrievalPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataRetrievalPolicyResponse)
    Q_DISABLE_COPY(GetDataRetrievalPolicyResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
