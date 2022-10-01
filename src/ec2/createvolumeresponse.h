// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMERESPONSE_H
#define QTAWS_CREATEVOLUMERESPONSE_H

#include "ec2response.h"
#include "createvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVolumeResponsePrivate;

class QTAWSEC2_EXPORT CreateVolumeResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateVolumeResponse(const CreateVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVolumeResponse)
    Q_DISABLE_COPY(CreateVolumeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
