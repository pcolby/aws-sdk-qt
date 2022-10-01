// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETELAYERUPLOADRESPONSE_H
#define QTAWS_COMPLETELAYERUPLOADRESPONSE_H

#include "ecrresponse.h"
#include "completelayeruploadrequest.h"

namespace QtAws {
namespace Ecr {

class CompleteLayerUploadResponsePrivate;

class QTAWSECR_EXPORT CompleteLayerUploadResponse : public EcrResponse {
    Q_OBJECT

public:
    CompleteLayerUploadResponse(const CompleteLayerUploadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CompleteLayerUploadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteLayerUploadResponse)
    Q_DISABLE_COPY(CompleteLayerUploadResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
