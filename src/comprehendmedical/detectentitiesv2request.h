// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESV2REQUEST_H
#define QTAWS_DETECTENTITIESV2REQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesV2RequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DetectEntitiesV2Request : public ComprehendMedicalRequest {

public:
    DetectEntitiesV2Request(const DetectEntitiesV2Request &other);
    DetectEntitiesV2Request();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectEntitiesV2Request)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
