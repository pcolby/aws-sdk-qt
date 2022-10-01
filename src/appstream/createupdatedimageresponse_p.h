// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPDATEDIMAGERESPONSE_P_H
#define QTAWS_CREATEUPDATEDIMAGERESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class CreateUpdatedImageResponse;

class CreateUpdatedImageResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit CreateUpdatedImageResponsePrivate(CreateUpdatedImageResponse * const q);

    void parseCreateUpdatedImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateUpdatedImageResponse)
    Q_DISABLE_COPY(CreateUpdatedImageResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
