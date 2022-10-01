// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETECTPHIREQUEST_H
#define QTAWS_DETECTPHIREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class DetectPHIRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT DetectPHIRequest : public ComprehendMedicalRequest {

public:
    DetectPHIRequest(const DetectPHIRequest &other);
    DetectPHIRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetectPHIRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
