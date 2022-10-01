// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVOLUMEIORESPONSE_H
#define QTAWS_ENABLEVOLUMEIORESPONSE_H

#include "ec2response.h"
#include "enablevolumeiorequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVolumeIOResponsePrivate;

class QTAWSEC2_EXPORT EnableVolumeIOResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableVolumeIOResponse(const EnableVolumeIORequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableVolumeIORequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVolumeIOResponse)
    Q_DISABLE_COPY(EnableVolumeIOResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
