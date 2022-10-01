// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEINGESTIONRESPONSE_P_H
#define QTAWS_CREATEINGESTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class CreateIngestionResponse;

class CreateIngestionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit CreateIngestionResponsePrivate(CreateIngestionResponse * const q);

    void parseCreateIngestionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateIngestionResponse)
    Q_DISABLE_COPY(CreateIngestionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
