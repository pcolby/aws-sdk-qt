// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESV2RESPONSE_H
#define QTAWS_DETECTENTITIESV2RESPONSE_H

#include "comprehendmedicalresponse.h"
#include "detectentitiesv2request.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesV2ResponsePrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DetectEntitiesV2Response : public ComprehendMedicalResponse {
    Q_OBJECT

public:
    DetectEntitiesV2Response(const DetectEntitiesV2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetectEntitiesV2Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectEntitiesV2Response)
    Q_DISABLE_COPY(DetectEntitiesV2Response)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
