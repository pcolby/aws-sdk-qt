// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACTIVATIONRESPONSE_P_H
#define QTAWS_DELETEACTIVATIONRESPONSE_P_H

#include "ssmresponse_p.h"

namespace QtAws {
namespace Ssm {

class DeleteActivationResponse;

class DeleteActivationResponsePrivate : public SsmResponsePrivate {

public:

    explicit DeleteActivationResponsePrivate(DeleteActivationResponse * const q);

    void parseDeleteActivationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteActivationResponse)
    Q_DISABLE_COPY(DeleteActivationResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
