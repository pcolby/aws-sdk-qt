// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFPGAIMAGERESPONSE_H
#define QTAWS_DELETEFPGAIMAGERESPONSE_H

#include "ec2response.h"
#include "deletefpgaimagerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteFpgaImageResponsePrivate;

class QTAWSEC2_EXPORT DeleteFpgaImageResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteFpgaImageResponse(const DeleteFpgaImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFpgaImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFpgaImageResponse)
    Q_DISABLE_COPY(DeleteFpgaImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
