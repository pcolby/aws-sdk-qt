// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPIMAGECONFIGRESPONSE_P_H
#define QTAWS_DELETEAPPIMAGECONFIGRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DeleteAppImageConfigResponse;

class DeleteAppImageConfigResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DeleteAppImageConfigResponsePrivate(DeleteAppImageConfigResponse * const q);

    void parseDeleteAppImageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAppImageConfigResponse)
    Q_DISABLE_COPY(DeleteAppImageConfigResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
