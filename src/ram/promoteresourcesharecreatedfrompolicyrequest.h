// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYREQUEST_H
#define QTAWS_PROMOTERESOURCESHARECREATEDFROMPOLICYREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class PromoteResourceShareCreatedFromPolicyRequestPrivate;

class QTAWSRAM_EXPORT PromoteResourceShareCreatedFromPolicyRequest : public RamRequest {

public:
    PromoteResourceShareCreatedFromPolicyRequest(const PromoteResourceShareCreatedFromPolicyRequest &other);
    PromoteResourceShareCreatedFromPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PromoteResourceShareCreatedFromPolicyRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
