// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLRESPONSE_P_H
#define QTAWS_CREATEPRESIGNEDNOTEBOOKINSTANCEURLRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreatePresignedNotebookInstanceUrlResponse;

class CreatePresignedNotebookInstanceUrlResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreatePresignedNotebookInstanceUrlResponsePrivate(CreatePresignedNotebookInstanceUrlResponse * const q);

    void parseCreatePresignedNotebookInstanceUrlResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePresignedNotebookInstanceUrlResponse)
    Q_DISABLE_COPY(CreatePresignedNotebookInstanceUrlResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
