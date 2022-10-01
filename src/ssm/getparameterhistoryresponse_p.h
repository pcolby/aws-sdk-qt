// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPARAMETERHISTORYRESPONSE_P_H
#define QTAWS_GETPARAMETERHISTORYRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class GetParameterHistoryResponse;

class GetParameterHistoryResponsePrivate : public SsmResponsePrivate {

public:

    explicit GetParameterHistoryResponsePrivate(GetParameterHistoryResponse * const q);

    void parseGetParameterHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetParameterHistoryResponse)
    Q_DISABLE_COPY(GetParameterHistoryResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
