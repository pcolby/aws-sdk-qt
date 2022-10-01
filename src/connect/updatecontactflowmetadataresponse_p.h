// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTFLOWMETADATARESPONSE_P_H
#define QTAWS_UPDATECONTACTFLOWMETADATARESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateContactFlowMetadataResponse;

class UpdateContactFlowMetadataResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateContactFlowMetadataResponsePrivate(UpdateContactFlowMetadataResponse * const q);

    void parseUpdateContactFlowMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateContactFlowMetadataResponse)
    Q_DISABLE_COPY(UpdateContactFlowMetadataResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
