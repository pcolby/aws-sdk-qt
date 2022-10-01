// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERSNOMEDCTREQUEST_H
#define QTAWS_INFERSNOMEDCTREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferSNOMEDCTRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferSNOMEDCTRequest : public ComprehendMedicalRequest {

public:
    InferSNOMEDCTRequest(const InferSNOMEDCTRequest &other);
    InferSNOMEDCTRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferSNOMEDCTRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
