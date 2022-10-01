// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYIMAGERESPONSE_H
#define QTAWS_COPYIMAGERESPONSE_H

#include "ec2response.h"
#include "copyimagerequest.h"

namespace QtAws {
namespace Ec2 {

class CopyImageResponsePrivate;

class QTAWSEC2_EXPORT CopyImageResponse : public Ec2Response {
    Q_OBJECT

public:
    CopyImageResponse(const CopyImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyImageResponse)
    Q_DISABLE_COPY(CopyImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
