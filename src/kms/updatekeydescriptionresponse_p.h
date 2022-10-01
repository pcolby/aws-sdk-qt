// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEKEYDESCRIPTIONRESPONSE_P_H
#define QTAWS_UPDATEKEYDESCRIPTIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class UpdateKeyDescriptionResponse;

class UpdateKeyDescriptionResponsePrivate : public KmsResponsePrivate {

public:

    explicit UpdateKeyDescriptionResponsePrivate(UpdateKeyDescriptionResponse * const q);

    void parseUpdateKeyDescriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateKeyDescriptionResponse)
    Q_DISABLE_COPY(UpdateKeyDescriptionResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
