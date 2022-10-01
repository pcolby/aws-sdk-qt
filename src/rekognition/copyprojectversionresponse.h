// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYPROJECTVERSIONRESPONSE_H
#define QTAWS_COPYPROJECTVERSIONRESPONSE_H

#include "rekognitionresponse.h"
#include "copyprojectversionrequest.h"

namespace QtAws {
namespace Rekognition {

class CopyProjectVersionResponsePrivate;

class QTAWSREKOGNITION_EXPORT CopyProjectVersionResponse : public RekognitionResponse {
    Q_OBJECT

public:
    CopyProjectVersionResponse(const CopyProjectVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CopyProjectVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CopyProjectVersionResponse)
    Q_DISABLE_COPY(CopyProjectVersionResponse)

};

} // namespace Rekognition
} // namespace QtAws

#endif
