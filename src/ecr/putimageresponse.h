// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERESPONSE_H
#define QTAWS_PUTIMAGERESPONSE_H

#include "ecrresponse.h"
#include "putimagerequest.h"

namespace QtAws {
namespace Ecr {

class PutImageResponsePrivate;

class QTAWSECR_EXPORT PutImageResponse : public EcrResponse {
    Q_OBJECT

public:
    PutImageResponse(const PutImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutImageResponse)
    Q_DISABLE_COPY(PutImageResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
