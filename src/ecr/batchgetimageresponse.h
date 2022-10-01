// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETIMAGERESPONSE_H
#define QTAWS_BATCHGETIMAGERESPONSE_H

#include "ecrresponse.h"
#include "batchgetimagerequest.h"

namespace QtAws {
namespace Ecr {

class BatchGetImageResponsePrivate;

class QTAWSECR_EXPORT BatchGetImageResponse : public EcrResponse {
    Q_OBJECT

public:
    BatchGetImageResponse(const BatchGetImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetImageResponse)
    Q_DISABLE_COPY(BatchGetImageResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
