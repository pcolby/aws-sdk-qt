// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESRESPONSE_H
#define QTAWS_DETECTENTITIESRESPONSE_H

#include "comprehendresponse.h"
#include "detectentitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class DetectEntitiesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT DetectEntitiesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    DetectEntitiesResponse(const DetectEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectEntitiesResponse)
    Q_DISABLE_COPY(DetectEntitiesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
