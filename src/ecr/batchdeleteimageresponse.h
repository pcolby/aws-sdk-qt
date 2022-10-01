// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEIMAGERESPONSE_H
#define QTAWS_BATCHDELETEIMAGERESPONSE_H

#include "ecrresponse.h"
#include "batchdeleteimagerequest.h"

namespace QtAws {
namespace Ecr {

class BatchDeleteImageResponsePrivate;

class QTAWSECR_EXPORT BatchDeleteImageResponse : public EcrResponse {
    Q_OBJECT

public:
    BatchDeleteImageResponse(const BatchDeleteImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteImageResponse)
    Q_DISABLE_COPY(BatchDeleteImageResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
