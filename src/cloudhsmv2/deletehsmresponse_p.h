// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHSMRESPONSE_P_H
#define QTAWS_DELETEHSMRESPONSE_P_H

#include "cloudhsmv2response_p.h"

namespace QtAws {
namespace CloudHsmV2 {

class DeleteHsmResponse;

class DeleteHsmResponsePrivate : public CloudHsmV2ResponsePrivate {

public:

    explicit DeleteHsmResponsePrivate(DeleteHsmResponse * const q);

    void parseDeleteHsmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHsmResponse)
    Q_DISABLE_COPY(DeleteHsmResponsePrivate)

};

} // namespace CloudHsmV2
} // namespace QtAws

#endif
