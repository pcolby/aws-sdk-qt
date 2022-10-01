// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEWORKFORCERESPONSE_P_H
#define QTAWS_DELETEWORKFORCERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteWorkforceResponse;

class DeleteWorkforceResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteWorkforceResponsePrivate(DeleteWorkforceResponse * const q);

    void parseDeleteWorkforceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteWorkforceResponse)
    Q_DISABLE_COPY(DeleteWorkforceResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
