// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFPGAIMAGERESPONSE_H
#define QTAWS_CREATEFPGAIMAGERESPONSE_H

#include "ec2response.h"
#include "createfpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateFpgaImageResponsePrivate;

class QTAWSEC2_EXPORT CreateFpgaImageResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateFpgaImageResponse(const CreateFpgaImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateFpgaImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFpgaImageResponse)
    Q_DISABLE_COPY(CreateFpgaImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
