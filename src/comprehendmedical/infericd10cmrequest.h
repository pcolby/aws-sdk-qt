// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INFERICD10CMREQUEST_H
#define QTAWS_INFERICD10CMREQUEST_H

#include "comprehendmedicalrequest.h"

namespace QtAws {
namespace ComprehendMedical {

class InferICD10CMRequestPrivate;

class QTAWSCOMPREHENDMEDICAL_EXPORT InferICD10CMRequest : public ComprehendMedicalRequest {

public:
    InferICD10CMRequest(const InferICD10CMRequest &other);
    InferICD10CMRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InferICD10CMRequest)

};

} // namespace ComprehendMedical
} // namespace QtAws

#endif
