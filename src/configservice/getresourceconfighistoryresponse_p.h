// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCECONFIGHISTORYRESPONSE_P_H
#define QTAWS_GETRESOURCECONFIGHISTORYRESPONSE_P_H

#include "configserviceresponse_p.h"

namespace QtAws {
namespace ConfigService {

class GetResourceConfigHistoryResponse;

class GetResourceConfigHistoryResponsePrivate : public ConfigServiceResponsePrivate {

public:

    explicit GetResourceConfigHistoryResponsePrivate(GetResourceConfigHistoryResponse * const q);

    void parseGetResourceConfigHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceConfigHistoryResponse)
    Q_DISABLE_COPY(GetResourceConfigHistoryResponsePrivate)

};

} // namespace ConfigService
} // namespace QtAws

#endif
