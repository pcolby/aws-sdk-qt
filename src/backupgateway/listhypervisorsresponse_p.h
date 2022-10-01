// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHYPERVISORSRESPONSE_P_H
#define QTAWS_LISTHYPERVISORSRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class ListHypervisorsResponse;

class ListHypervisorsResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit ListHypervisorsResponsePrivate(ListHypervisorsResponse * const q);

    void parseListHypervisorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHypervisorsResponse)
    Q_DISABLE_COPY(ListHypervisorsResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
