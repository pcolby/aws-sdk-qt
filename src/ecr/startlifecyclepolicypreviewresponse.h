// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTLIFECYCLEPOLICYPREVIEWRESPONSE_H
#define QTAWS_STARTLIFECYCLEPOLICYPREVIEWRESPONSE_H

#include "ecrresponse.h"
#include "startlifecyclepolicypreviewrequest.h"

namespace QtAws {
namespace Ecr {

class StartLifecyclePolicyPreviewResponsePrivate;

class QTAWSECR_EXPORT StartLifecyclePolicyPreviewResponse : public EcrResponse {
    Q_OBJECT

public:
    StartLifecyclePolicyPreviewResponse(const StartLifecyclePolicyPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartLifecyclePolicyPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartLifecyclePolicyPreviewResponse)
    Q_DISABLE_COPY(StartLifecyclePolicyPreviewResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
