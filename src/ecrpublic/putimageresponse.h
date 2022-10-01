// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIMAGERESPONSE_H
#define QTAWS_PUTIMAGERESPONSE_H

#include "ecrpublicresponse.h"
#include "putimagerequest.h"

namespace QtAws {
namespace EcrPublic {

class PutImageResponsePrivate;

class QTAWSECRPUBLIC_EXPORT PutImageResponse : public EcrPublicResponse {
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

} // namespace EcrPublic
} // namespace QtAws

#endif
