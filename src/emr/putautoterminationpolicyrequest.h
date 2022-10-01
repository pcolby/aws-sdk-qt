// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAUTOTERMINATIONPOLICYREQUEST_H
#define QTAWS_PUTAUTOTERMINATIONPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class PutAutoTerminationPolicyRequestPrivate;

class QTAWSEMR_EXPORT PutAutoTerminationPolicyRequest : public EmrRequest {

public:
    PutAutoTerminationPolicyRequest(const PutAutoTerminationPolicyRequest &other);
    PutAutoTerminationPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAutoTerminationPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
