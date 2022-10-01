// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMERESPONSE_H
#define QTAWS_DETACHVOLUMERESPONSE_H

#include "ec2response.h"
#include "detachvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class DetachVolumeResponsePrivate;

class QTAWSEC2_EXPORT DetachVolumeResponse : public Ec2Response {
    Q_OBJECT

public:
    DetachVolumeResponse(const DetachVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachVolumeResponse)
    Q_DISABLE_COPY(DetachVolumeResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
