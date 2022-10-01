// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELIMAGECREATIONRESPONSE_P_H
#define QTAWS_CANCELIMAGECREATIONRESPONSE_P_H

#include "imagebuilderresponse_p.h"

namespace QtAws {
namespace ImageBuilder {

class CancelImageCreationResponse;

class CancelImageCreationResponsePrivate : public ImageBuilderResponsePrivate {

public:

    explicit CancelImageCreationResponsePrivate(CancelImageCreationResponse * const q);

    void parseCancelImageCreationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelImageCreationResponse)
    Q_DISABLE_COPY(CancelImageCreationResponsePrivate)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
