// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTIMAGERESPONSE_H
#define QTAWS_EXPORTIMAGERESPONSE_H

#include "ec2response.h"
#include "exportimagerequest.h"

namespace QtAws {
namespace Ec2 {

class ExportImageResponsePrivate;

class QTAWSEC2_EXPORT ExportImageResponse : public Ec2Response {
    Q_OBJECT

public:
    ExportImageResponse(const ExportImageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ExportImageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportImageResponse)
    Q_DISABLE_COPY(ExportImageResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
