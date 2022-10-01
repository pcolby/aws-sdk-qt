// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTENTITIESREQUEST_H
#define QTAWS_DETECTENTITIESREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectEntitiesRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DetectEntitiesRequest : public ComprehendMedicalRequest {

public:
    DetectEntitiesRequest(const DetectEntitiesRequest &other);
    DetectEntitiesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectEntitiesRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
