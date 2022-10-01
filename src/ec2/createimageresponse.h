// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIMAGERESPONSE_H
#define QTAWS_CREATEIMAGERESPONSE_H

#include "ec2response.h"
#include "createimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateImageResponsePrivate;

class QTAWSEC2_EXPORT CreateImageResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateImageResponse(const CreateImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateImageResponse)
    Q_DISABLE_COPY(CreateImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
