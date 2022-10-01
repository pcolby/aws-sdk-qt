// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLIFECYCLEPOLICYPREVIEWRESPONSE_H
#define QTAWS_GETLIFECYCLEPOLICYPREVIEWRESPONSE_H

#include "ecrresponse.h"
#include "getlifecyclepolicypreviewrequest.h"

namespace QtAws {
namespace Ecr {

class GetLifecyclePolicyPreviewResponsePrivate;

class QTAWSECR_EXPORT GetLifecyclePolicyPreviewResponse : public EcrResponse {
    Q_OBJECT

public:
    GetLifecyclePolicyPreviewResponse(const GetLifecyclePolicyPreviewRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLifecyclePolicyPreviewRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLifecyclePolicyPreviewResponse)
    Q_DISABLE_COPY(GetLifecyclePolicyPreviewResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
