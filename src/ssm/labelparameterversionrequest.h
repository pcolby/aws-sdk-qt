// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LABELPARAMETERVERSIONREQUEST_H
#define QTAWS_LABELPARAMETERVERSIONREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class LabelParameterVersionRequestPrivate;

class QTAWSSSM_EXPORT LabelParameterVersionRequest : public SsmRequest {

public:
    LabelParameterVersionRequest(const LabelParameterVersionRequest &other);
    LabelParameterVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LabelParameterVersionRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
