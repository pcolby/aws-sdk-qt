// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYFPGAIMAGERESPONSE_H
#define QTAWS_COPYFPGAIMAGERESPONSE_H

#include "ec2response.h"
#include "copyfpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CopyFpgaImageResponsePrivate;

class QTAWSEC2_EXPORT CopyFpgaImageResponse : public Ec2Response {
    Q_OBJECT

public:
    CopyFpgaImageResponse(const CopyFpgaImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyFpgaImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyFpgaImageResponse)
    Q_DISABLE_COPY(CopyFpgaImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
