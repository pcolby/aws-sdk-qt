// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPIIENTITIESRESPONSE_H
#define QTAWS_DETECTPIIENTITIESRESPONSE_H

#include "comprehendresponse.h"
#include "detectpiientitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectPiiEntitiesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectPiiEntitiesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectPiiEntitiesResponse(const DetectPiiEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectPiiEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectPiiEntitiesResponse)
    Q_DISABLE_COPY(DetectPiiEntitiesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
